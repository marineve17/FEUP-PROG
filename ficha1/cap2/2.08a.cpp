#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

#define pi 3.1415926535897932384626433832795028

int main() {
    double a;
    cout << "ang\tsin\t\tcos\t\ttan" << endl;
    cout << fixed << setprecision(6);
    for (int i = 0; i <= 90; i = i+15) {
        a = i * pi / 180;
        if (i == 90) {
            cout << i << "\t" << sin(a) << "\t" << cos(a) << "\t" << "infinite" << endl;
        } else {
            cout << i << "\t" << sin(a) << "\t" << cos(a) << "\t" << tan(a) << endl;
        }
    }
}