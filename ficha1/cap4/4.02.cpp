#include <iostream>
#include<vector>

using namespace std;

void readVector(vector<int> &v) {
    int i = 0;
    double input;
    while (true) {
        cin >> input;

        if (input == -1) {  //breaking with -1 (must be changed to eof)
            cout << "Done." << endl;
            break;
        }

        v.push_back(input);
    }
}

int findValueInVector(const vector<int> &v, int value, size_t pos1, size_t pos2) {
    for (int i = pos1; i < pos2; i++) {
        if (v[i] == value) {
            return i;
        }
    }
    return -1;
}

size_t findMultValuesInVector(const vector<int> &v, int value, size_t pos1, size_t pos2, vector<size_t> &index) {
    int j = 0;
    int idx = findValueInVector(v, value, pos1, pos2);
    if (idx != -1) {
        index.push_back(idx);
        j++;
        while (idx != -1) {
            idx = findValueInVector(v, value, idx + 1, pos2);
            if (idx != -1) {
                index.push_back(idx);
                j++;
            }
        }
    }
    return j;
}

int main() {
    int pos1, pos2;
    double input, value;
    vector<int> nums;
    vector<size_t> index;

    cout << "Input the elements of the sequence (eof to stop): ";

    readVector(nums);
    cin.clear();
    cin.ignore(10000, '\n');

    cout << "Give me a value to find, a position to start and a final position: ";
    cin >> value >> pos1 >> pos2;
    if (pos2 > nums.size()) {  //restricting variable pos2
        pos2 = nums.size();
    }

    if (findValueInVector(nums, value, pos1, pos2) == -1) {
        cout << "The number given was not found between the positions given." << endl;
    } else {
        cout << "The value was first found in the position " << findValueInVector(nums, value, pos1, pos2) << endl;  //states first occurence
    }

    size_t j = findMultValuesInVector(nums, value, pos1, pos2, index);
    cout << "The number was found " << j << ((j == 1) ? " time is the position " : " times in the positions ");  //states every occurence

    for (auto i: index) {
        cout << index[i] << " ";
    }
    cout << endl;

    return 0;
}