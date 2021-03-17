#include <iostream>
#include<vector>
using namespace std;

void readVector(vector<int> &v) {
    double input;
    int length = 0;
    while (true) {
        cin >> input;
        if (input == -1) {  //breaking with -1
            cin.clear();
            cin.ignore(10000, '\n');  
            break;
        }
        v.push_back(input);
    }
}

void sortVector(vector<int> &v) {
    int length = v.size();

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
}

int binarySearch(const vector<int> &v, int value) {
    bool found = false;
    int first = 0;
    int last = v.size() - 1;
    
    while (!found) {
        int middle = (first + last) / 2;

        if (v[middle] == value) {
            found = true;
            return middle;
        } else {
            if (first == last) {
                break;
            } else {
                if (v[middle] < value) {
                    first = middle + 1;
                } else {
                    last = middle - 1;
                }
            }
        }
    }

    return -1;
}

int main() {
    int value;
    vector<int> v;

    cout << "Input sequence (-1 to break): ";
    readVector(v);
    sortVector(v);

    cout << "The sequence in ascending order is: ";

    for (auto elem : v) {  //print sorted vector
        cout << elem << " ";
    }
    cout << endl;

    cout << "Input value you want to find: ";
    cin >> value;
    int a = binarySearch(v, value);
    if (a == -1) {
        cout << "The value was not found in the sequence." << endl;
    } else {
        cout << "Value found in position " << a << endl;
    }

    return 0;
}