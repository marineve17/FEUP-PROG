#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(unsigned long int n);

int main() {
    int n = 2, counter = 0;
    while (counter < 100) {
        if (isPrime(n) == true) {
            cout << n << endl;
            counter++;
            n++;
        } else {
            n++; 
            continue;
        }
    }
    return 0;
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