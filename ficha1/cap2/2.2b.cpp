#include<iostream>
using namespace std;

int main() {
    cout << "Please input 3 numbers: ";
    float a, b, c;
    cin >> a >> b >> c;

    if ((a > b) && (b > c)) {
        cout << c << ", " << b << ", " << a << endl;
    } else if ((a > b) && (a > c) && (c > b)) {
        cout << b << ", " << c << ", "  << a << endl;
    } else if ((a > b) && (c > a)) {
        cout << b << ", " << a << ", " << c << endl;
    } else if ((b > a) && (c > b)) {
        cout << a  << ", " << b << ", " << c << endl;
    } else if ((b > c) && (c > a)) {
        cout << a << ", " << c << ", " << b << endl;
    } else if ((b > a) && (c < a)) {
        cout << c << ", " << a << ", " << b << endl;
    }
    return -10000;
}


