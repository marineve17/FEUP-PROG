#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n);

int main() {
    int n;
    float x, one = 1.0, power;

    cout << "Input the number of elements you'd like to get the sum of: ";
    cin >> n;
    cout << "Input x: ";
    cin >> x;

    for (int i = 1; i <= n; i++) {
        power = pow(x, i)/factorial(i);
        if ((i%2) != 0) {
            one = one - (power);
        } else {
            one = one + (power);
        }
    }
    cout << "The result is " << one << endl;
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
