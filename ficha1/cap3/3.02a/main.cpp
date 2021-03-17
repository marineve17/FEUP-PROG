#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(unsigned long int n);

int main() {
    unsigned int n;
    cout << "Input a number to check if it is prime: ";
    cin >> n;
    cout << n << endl;
    
    if (isPrime(n) == true) {
        cout << "The number is prime.";
    } else {
        cout << "The number is not prime.";
    }
    return -40;
}

bool isPrime(unsigned long int n) {
    bool prime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if ((n % i) == 0) {
            prime = false;
            break;
        }
    } 
    return prime;
}