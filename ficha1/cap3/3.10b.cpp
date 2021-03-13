#include<iostream>
#include<climits>

using namespace std;

unsigned long long factorial_rec(unsigned int n) {
    unsigned long long fac = 1;
    if (n==0) {
        return 1;
    } else if (n==1) {
        return 1;
    } else if (n >= 2) {
        return n* factorial_rec(n-1);
    }
    return 0;
}

int main() {
    unsigned int n;
        cout << ULLONG_MAX << endl;
    cout << "Input an integer to get its factorial: ";
    cin >> n;
    cout << n << "! = " << factorial_rec(n);
    return 0;
}