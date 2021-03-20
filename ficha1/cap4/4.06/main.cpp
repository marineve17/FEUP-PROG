#include <iostream>
#include<vector>
using namespace std;

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

void vectorUnion(vector<int> &v1, vector<int> &v2, vector<int> &v3) {
    for (auto elem : v1) {  //adding v1 to auxiliary vector v3
        v3.push_back(elem);
    }
    for (auto elem : v2) {  //adding v2 to auxiliary vector v3
        v3.push_back(elem);
    }

    sortVector(v3);
    removeDuplicates(v3);
}

void vectorIntersection(vector<int> &v1, vector<int> &v2, vector<int> &v3) {
    v3.clear();  //because this function is called after joining the vectors 
                 //and v3 is passed as reference, it already has values allocated
                 //and needs to be cleared before being used as an auxiliar

    for (auto elem1 : v1) {
        for (auto elem2 : v2) {
            if (elem2 == elem1) {
                v3.push_back(elem2);
            }
        }
    }
    sortVector(v3);
    removeDuplicates(v3);
}

void readVector(vector<int> &v) {
    int i = 0;
    double input;
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

int main() {
    vector<int> v1, v2, v3;

    cout << "Input sequence 1 (-1 to break): ";
    readVector(v1);
    cout << "Input sequence 2 (-1 to break): ";
    readVector(v2);

    vectorUnion(v1, v2, v3);
    cout << ((v3.size() == 0) ? "Both sequences given were empty." : "The union of both sequences (sorted and without repeated values) is: ");
    for (auto elem : v3) {
        cout << elem << " ";
    }
    cout << endl;

    vectorIntersection(v1, v2, v3);
    cout << ((v3.size() == 0) ? "The sequences do not have values in common." : "Their intersection (sorted and without repeated values) is: ");
    for (auto elem : v3) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}