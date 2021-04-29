#include <iostream>
#include <vector>
#include <string>
#include "../../../include/utils.h"
#include <fstream>

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

    cout << ((order == 'a') ? "The sequence in ascending order is: " : "The sequence in descending order is: ") << endl;
    for (auto elem : v) {  //print sorted vector
        cout << elem << endl;
    }
    cout << endl;

}

void readFile(vector<string> &v) {
    ifstream Names;
    Names.open("names.txt", ios::in);
    if (!Names) {
        cout << "The file doesn't exist.";
    } else { 
        string name;
        while (getline(Names, name)) {
            if (Names.eof()) {
                getline(Names, name);  // getline reads eof and ignores the last line
                v.push_back(name);
                break;
            }

            v.push_back(name);

        }
    }

    Names.close();
}

int main() {
    vector<string> name_list;

    char option;
    utils::input::read_value<char>("Please state if you want the sequence to be sorted ascendingly (a) or descendingly (d): ",
            "Invalid option. Must be 'a' or 'd'.",
            option, 
            [] (auto res) {return res == 'a' || res == 'd'; });

    cout << "Input sequence (eof to break): ";

    readFile(name_list);  // fills vector with names from text file
    bubbleSort(name_list, option);  // sorts and prints sorted vector

    return 0;
}