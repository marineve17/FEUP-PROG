#include <iostream>
#include<vector>
using namespace std;

bool f(int x, int y) {
    if (x < y) {
        return true;
    }
    return false;
}

void bubbleSort(vector<int> &v, bool f(int, int)) {
    int length = v.size();

    while (length != 0) {
        for (size_t i = 0; i < v.size() -1; i++) {
            if (f(v[i], v[i+1])) { 
                int a = v[i];
                v[i] = v[i+1];
                v[i+1] = a;
            }
        }
    length--;
    }

    cout << "The sequence in ascending order is: ";
    for (auto elem : v) {  //print sorted vector
        cout << elem << " ";
    }
    cout << endl;
}

void readVector(vector<int> &v) {
    int i = 0;
    double input;
    while (true) {
        cin >> input;

        if (cin.eof()) {  //breaking with eof
            break;
        }

        v.push_back(input);
    }
}

char validate() {
    char option;
    cin >> option;
    while (cin.good() && (option != 'a') && (option != 'd')) {
        cout << "Not a valid option. Input a or d: ";
        cin >> option;
    }
    return option;
}

int main() {
    char option;
    cout << "Please state if you want the sequence to be sorted ascendigly (a) or descendingly (d): ";
    option = validate();

    cout << "Input sequence (eof to break): ";
    vector<int> v;
    readVector(v);
    bubbleSort(v, f);

    return 0;
}