#include<iostream>

using namespace std;

int getGCD(int a, int b) {
    if (a == b) {
        return a;
    } else if ((a == 0) || (b == 0)) {
        if (a == 0) {
            return b;
        } else if (b == 0) {
            return a;
        }
    } else {
        if (a > b) {
            while (a > b) {
                a -=b;
            } 
            while (b > a) {
                b -= a;
            }
        } else {
            while (b > a) {
                b -= a;
            }
            while (a > b) {
                a -= b;
            }
        }
    }
    return a;
}

int main() {
    int a, b;
    cout << "Input two numbers to get their greatest common divisor: ";
    cin >> a >> b;
    cout << "The greatest common divisor (GCD) between both numers is " << getGCD(a, b) << endl;
    return 0;
}