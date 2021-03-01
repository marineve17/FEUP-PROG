#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    double a;
    cout << "ang\tsin\t\tcos\t\ttan" << endl;
    cout << fixed << setprecision(6);
    for (int i = 0; i <= 90; i = i+15) {
        a = i * M_PI / 180;
        if (i == 90) {
            cout << i << "\t" << sin(a) << "\t" << cos(a) << "\t" << "infinite" << endl;
        } else {
            cout << i << "\t" << sin(a) << "\t" << cos(a) << "\t" << tan(a) << endl;
        }
    }
}
