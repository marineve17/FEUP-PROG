#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(unsigned long int n);

int main() {
    unsigned long int n = ULONG_MAX;
    int i;
    bool res;
    for (n; n > 0; n--) {
        cout << n << endl;
        res = isPrime(n);
        if (res == true) {
            cout << n;
            break;
        }
    }
    return 0;
}

bool isPrime(unsigned long int n) {
    bool prime = true;
    int i;
    for (i = 2; i < n; i++) {
        if ((n % i) == 0) {
            prime = false;
            break;
        }
    } 
    return prime;
}