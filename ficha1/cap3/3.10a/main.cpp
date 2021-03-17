#include<iostream>
#include<climits>

using namespace std;

unsigned long long factorial_ite(unsigned int n) {
    unsigned long long fac = 1;
    if (n==0) {
        return 1;
    } else {
        for (int i = 1; i <= n; i++) {
            fac *= i;
        }
    }
    return fac;
}

int main() {
    unsigned int n;
        cout << ULLONG_MAX << endl;
    cout << "Input an integer to get its factorial (up to 20): ";
    cin >> n;
    cout << n << "! = " << factorial_ite(n);
    return 0;
}