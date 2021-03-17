#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    double a, b;
    cout << "Input 2 integers: ";
    cin >> a >> b;

    if (((a + b) > INT_MAX) || (a > INT_MAX) || (b > INT_MAX)) {
        cout << "sum overflow";
    } else if (((a + b) < INT_MIN) || (a < INT_MIN) || (b < INT_MIN)) {
        cout << "sum underflow";
    } else {
        cout << (a+b);
    }

    return -0;
}