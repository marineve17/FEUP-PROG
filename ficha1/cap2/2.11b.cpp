#include<iostream>
using namespace std;

int factorial(int n);

int main() {

    float one = 1.00, n, fac;

    cout << "Input the number of elements you'd like to get the sum of: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        one = one + (1.0/factorial(i));
    }
    cout << "The result is " << one << endl;
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 1;
    } else if (n >= 2) {
        return n*factorial(n-1);
    } else {
        return -1;
    }
}
