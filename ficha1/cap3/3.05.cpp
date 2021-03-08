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
        while (!(a==b)) {
            if (a>b) {
                a -= b;
            } else {
                b -= a;
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