#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Input a 3-digit number: ";
    cin >> a;
    if (a/100 == a % 10) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
}
