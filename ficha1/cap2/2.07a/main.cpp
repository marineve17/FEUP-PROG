#include <iostream>
#include <math.h>
using namespace std;

int main() {
    unsigned int n, i;
    bool prime = true;
    cout << "Input a number to check if it is prime: ";
    cin >> n;
    cout << n << endl;
    for (i = 2; i < n; i++) {
        if ((n % i) == 0) {
            prime = false;
            break;
        }
    } 
    if (prime == true) {
        cout << "The number is prime.";
    } else {
        cout << "The number is not prime.";
    }
    return -40;
}