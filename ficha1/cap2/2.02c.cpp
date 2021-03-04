#include<iostream>
using namespace std;

int main() {
    cout << "Please input 3 numbers to build a triangle: ";
    float a, b, c, max, l1, l2;
    cin >> a >> b >> c;

    if ((a > b) && (a > c)) {
        max = a;
        l1 = b;
        l2 = c;
    } else if ((b > c) && (b > a)) {
        max = b;
        l1 = a;
        l2 = c;
    } else if ((c > a) && (c > b)) {
        max = c;
        l1 = a;
        l2 = b;
    }
    if ((a <= 0) or (b <= 0) or (c <= 0)) {
        cout << "None of the lengths can be less than or equal to zero." << endl;
    } else if (max > (l1 + l2)) {
        cout << "The triangle is impossible to build."
    } else {
        cout << "The triangle is possible to build."
    }
    
}