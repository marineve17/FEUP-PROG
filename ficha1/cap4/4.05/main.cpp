#include <iostream>
#include <vector>
using namespace std;

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

void removeDuplicates(vector<int> &v) {
    for (int i = 1; i < v.size(); i++) {
        int lastelem = v[i-1];
        while (v[i] == lastelem) {
            v.erase(v.begin() + i);
        }
    }
}

int main() {
    cout << "Input elements of the sequence (eof to break): ";
    vector<int> sequence;
    readVector(sequence);
    sortVector(sequence);

    cout << "The sequence in ascending order is: ";
    for (auto elem : sequence) {  //prints sorted vector
        cout << elem << " ";
    }
    cout << endl;

    cout << "The cleaned vector is: ";
    removeDuplicates(sequence);
    for (auto elem : sequence) {  //prints vector without duplicates
        cout << elem << " ";
    }
    cout << endl;
    
    return 0;
}