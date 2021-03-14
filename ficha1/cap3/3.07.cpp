#include <iostream>
#include <ctype.h>

using namespace std;

bool readInt(int &x) {
    cin >> x;

    if (!(cin.bad() || (cin.peek()) != '\n')) {
        cin.clear();
        cin.ignore(10000, '\n');
        return true;
    } else {
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
    }
}

int main() {
    int x;
    cout << "Input a number: ";

    if (readInt(x)) {
        cout << "The input is valid." << endl;
    } else {
        cout << "The input is invalid." << endl;
    }
    return 0;
}