#include <iostream>

using namespace std;

void readArray(int a[], size_t nElem) {
    for (int i = 0; i < nElem; i++) {
        cin >> a[i];
    }
}

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2) {
    for (int i = pos1; i <= pos2; i++) {
        if (a[i] == value) {
            return i;
        }
    }
    return -1;
}

size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[]) {
    int j = 0;
    int idx = findValueInArray(a, nElem, value, pos1, pos2);
    if (idx != -1) {
        index[j] = idx;
        j++;
        while (idx != -1) {
            idx = findValueInArray(a, nElem, value, idx + 1, pos2);
            if (idx != -1) {
                index[j] = idx;
                j++;
            }
        }
    }
    return j;
}

int main() {
    int pos1, pos2, count;
    double input, value;
    
    cout << "Input the amount of numbers you want to cast an array for ";
    cin >> count;

    int a[count];
    size_t index[count];

    cout << "Input the elements of the sequence: ";
    readArray(a, count);
    cin.clear();
    cin.ignore(10000, '\n');

    cout << "Give me a value to find, a position to start and a final position: ";
    cin >> value >> pos1 >> pos2;
    if (pos2 > count) {  //restricting variable pos2
        pos2 == count;
    }

    if (findValueInArray(a, count, value, pos1, pos2) == -1) {
        cout << "The number given was not found between the positions given." << endl;
    } else {
        cout << "The value was first found in the position " << findValueInArray(a, count, value, pos1, pos2) << endl;  //states first occurence
    }

    int j = findMultValuesInArray(a, count, value, pos1, pos2, index);
    cout << "The number was found " << j << ((j == 1) ? " time is the position " : " times in the positions ");  //states every occurence
    for (int i = 0; i < j; i++) {
        cout << index[i] << " ";
    }
    cout << endl;

    return 0;
}