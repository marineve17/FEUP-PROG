#include <iostream>
#include <vector>
#include <string>
#include "../../../include/utils.h"

using namespace std;

void bubbleSort(vector<string> &v, char order) {
    int length = v.size();

    if (order == 'a') {   //ascending
        while (length != 0) {
            for (size_t i = 0; i < v.size() -1; i++) {
                if (v[i] > v[i+1]) { 
                    string a = v[i];
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
                    string a = v[i];
                    v[i] = v[i+1];
                    v[i+1] = a;
                }
            }
        length--;
        }
    }

    cout << ((order == 'a') ? "The sequence in ascending order is: " : "The sequence in descending order is: ");
    for (auto elem : v) {  //print sorted vector
        cout << elem << " ";
    }
    cout << endl;

}

void readVector(vector<string> &v) {
    string input;
    while (getline(cin, input)) {
        v.push_back(input);
    }
}

int main() {
    char option;
    utils::input::read_value<char>("Please state if you want the sequence to be sorted ascendingly (a) or descendingly (d): ",
            "Invalid option. Must be 'a' or 'd'.",
            option, 
            [] (auto res) {return res == 'a' || res == 'd'; });

    cout << "Input sequence (eof to break): ";

    vector<string> v;
    readVector(v);  //fills vector

    for (auto elem : v) {
        cout << elem << " ";
    }
    
    bubbleSort(v, option);  //sorts vector

    return 0;
}