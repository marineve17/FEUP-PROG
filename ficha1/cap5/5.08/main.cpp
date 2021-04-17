#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

struct EuroMillionsBet {
    vector<unsigned> mainNumbers;
    vector<unsigned> luckyStars;
};

bool isBetween(int a) {
    return ((a > 0) && (a < 50));
}

bool isValid(int a) {
    return ((a > 0) && (a < 13));
}

void randomBet(EuroMillionsBet &bet) {
    unsigned int a, b, c, d, e;
    unsigned int star1, star2;

    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        int num = (rand() % 49 - 1 + 1) + 1 ;
        if (find(bet.mainNumbers.begin(), bet.mainNumbers.end(), num) == bet.mainNumbers.end()) {
            bet.mainNumbers.push_back(num);
        } else {
            i--;
        }
    }

    for (int i = 0; i < 2; i++) {
        int num = (rand() % 12 - 1 + 1) + 1 ;
        if (find(bet.luckyStars.begin(), bet.luckyStars.end(), num) == bet.luckyStars.end()) {
            bet.luckyStars.push_back(num);
        } else {
            i--;
        }
    }
    cout << endl;
}

void readBet(EuroMillionsBet &bet) {
    for (int i = 1; i < 6; i++) {
        unsigned int a;

        cout << "Input the " << i << (i==1 ? "st" : (i==2 ? "nd" : (i==3 ? "rd" :"th"))) << " main number: ";
        cin >> a;
        if (a < 50 && a > 0) {
            if (find(bet.mainNumbers.begin(), bet.mainNumbers.end(), a) == bet.mainNumbers.end()) {
               bet.mainNumbers.push_back(a); 
            } else {
                cout << "Invalid input." << endl;
                i--;
            }
        } else {
            cout << "Invalid input. Must be between 1 and 49." << endl;
            i--;
        }
        if (i == 4) {
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    for (int i = 1; i < 3; i++) {
        unsigned int a;

        cout << "Input the " << i << (i == 1 ? "st star: " : "nd star: ");
        cin >> a;
        if (a < 13 && a > 0) {
            if (find(bet.luckyStars.begin(), bet.luckyStars.end(), a) == bet.luckyStars.end()) {
               bet.luckyStars.push_back(a); 
            } else {
                cout << "Invalid input. " << endl;
                i--;
            }
        } else {
            cout << "Invalid input. Must be between 1 and 12." << endl;
            i--;
        }
        if (i == 2) {
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
}

void sortVector(EuroMillionsBet &bet) {
    int stars = bet.luckyStars.size();
    int numbers = bet.mainNumbers.size();

    while (stars != 0) {
        for (size_t i = 0; i < bet.luckyStars.size() -1; i++) {
            if (bet.luckyStars[i] > bet.luckyStars[i+1]) { 
                int a = bet.luckyStars[i];
                bet.luckyStars[i] = bet.luckyStars[i+1];
                bet.luckyStars[i+1] = a;
            }
        }
        stars--;
    }

    while (numbers != 0) {
        for (size_t i = 0; i < bet.mainNumbers.size() -1; i++) {
            if (bet.mainNumbers[i] > bet.mainNumbers[i+1]) { 
                int a = bet.mainNumbers[i];
                bet.mainNumbers[i] = bet.mainNumbers[i+1];
                bet.mainNumbers[i+1] = a;
            }
        }
        numbers--;
    }
}

EuroMillionsBet Intersection(EuroMillionsBet bet1, EuroMillionsBet bet2, EuroMillionsBet &intersection) {
    for (auto elem1 : bet1.luckyStars) {
        for (auto elem2 : bet2.luckyStars) {
            if (elem2 == elem1) {
                intersection.luckyStars.push_back(elem2);
            }
        }
    }

    for (auto elem1 : bet1.mainNumbers) {
        for (auto elem2 : bet2.mainNumbers) {
            if (elem2 == elem1) {
                intersection.mainNumbers.push_back(elem2);
            }
        }
    }

    return intersection;
}

int main() {
    EuroMillionsBet bet, random, intersection;

    readBet(bet);
    randomBet(random);
    sortVector(bet);
    sortVector(random);
    Intersection(bet, random, intersection);

    cout << "You guessed " << intersection.mainNumbers.size() << " main numbers: ";
    for (auto elem : intersection.mainNumbers) {
        cout << elem << ' ';
    }
    cout << endl;

    cout << "You guessed " << intersection.luckyStars.size() << " lucky stars: ";
    for (auto elem : intersection.luckyStars) {
        cout << elem << ' ';
    }
    cout << endl;

    if (intersection.luckyStars.size() == 2 && intersection.mainNumbers.size() == 5) {
        cout << "Congratulations, you should've played in the actaul game cuz you actually got it all right. Dumb f*ck." << endl;
    }

    return 0;
}