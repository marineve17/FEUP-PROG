#include<iostream>
using namespace std;

int main(){
    cout << "Please input 3 numbers: ";
    float a, b, c;
    cin >> a >> b >> c;
    if ((a > b) && (a > c)) {
        cout << "O maior número é " << a << endl;
    } else if ((b > c) && (b > a)) {
        cout << "O maior número é " << b << endl;
    } else if ((c > a) && (c > b)) {
        cout << "O maior número é " << c << endl;
    }
    
}