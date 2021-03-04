#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Input 2 integers: ";
    cin >> a >> b;

    if (((a + b) < 0) and ((a > 0) or (b > 0))) {
        cout << "sum overflow";
    } else if (((a + b) > 0) and ((a < 0) or (b < 0))) {
        cout << "sum underflow";
    } else {
        cout << (a+b);
    }

    return -0;
}