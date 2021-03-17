#include <iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &v, char option) {
    int length = v.size();

    if (option == 'a') {   //ascending
        while (length != 0) {
            for (size_t i = 0; i < v.size() -1; i++) {
                if (v[i] > v[i+1]) { 
                    int a = v[i];
                    v[i] = v[i+1];
                    v[i+1] = a;
                }
            }
        length--;
        }
    } else {   //descending
        while (length != 0) {
            for (size_t i = 0; i < v.size() -1; i++) {
                if (v[i] < v[i+1]) { 
                    int a = v[i];
                    v[i] = v[i+1];
                    v[i+1] = a;
                }
            }
        length--;
        }
    }

    cout << ((option == 'a') ? "The sequence in ascending order is: " : "The sequence in descending order is: ");
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
    cout << "Please state if you want the sequence to be sorted ascendingly (a) or descendingly (d): ";
    option = validate();

    cout << "Input sequence (eof to break): ";
    vector<int> v;
    readVector(v);
    bubbleSort(v, option);

    return 0;
}