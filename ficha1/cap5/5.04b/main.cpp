#include <iostream>

using namespace std;

int main() {
    string s, sc;
    int nc;
    char c;

    cout << "Input a sentence: ";
    getline(cin, s);

    cout << "Please input the character you want to find: ";
    cin >> c;
    cin.ignore(10000, '\n');

    cout << "PLease input the number of times the character must appear in a row: ";
    cin >> nc;
    cin.ignore(10000, '\n');

    for (int i = 0; i < nc; i++) {  // Making substring out of repetition of the specified character
        sc += c;
    }

    cout << "The sequence was " << (s.find(sc) != string::npos ? "found " : "not found ") << "in the sentence." << endl;

    return 0;
}