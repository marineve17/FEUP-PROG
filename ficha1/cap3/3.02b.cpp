#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(unsigned long int n);

int main() {
    int n = 2;
    while (n < 1000) {
        if (isPrime(n) == true) {
            cout << n << endl;
            n++;
        } else {
            n++;
        }
    }
    return 0;
}

bool isPrime(unsigned long int n) {
    bool prime = true;
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if ((n % i) == 0) {
            prime = false;
            break;
        }
    } 
    return prime;
}