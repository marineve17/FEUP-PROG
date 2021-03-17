#include<iostream>

using namespace std;

int getGCD(int m, int n) {
    if (m%n == 0) {
        return n;
    } else {
        return getGCD(n, m%n);
    }
}

int main() {
    int m, n;
    cout << "Input 2 integers to get their GCD: ";
    cin >> m >> n;
    cout << "Their GCD is " << getGCD(m, n) << endl;
    return 0;
}