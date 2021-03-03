#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, real1, real2, i, sq;
    cout << "Given the format \
    \na*x^2 + b*x + c = 0\
    \nInput a, b and c: ";
    cin >> a >> b >> c;
    
    cout << fixed << setprecision(3);
    sq = pow(b, 2) - 4*a*c;    

    if (sq < 0) {
        real1 = -b/(2*a);
        i = sqrt(-sq)/(2*a);
        cout << "The equation has 2 complex roots that are " << real1 << " - " << i << "i and " << real1 << " + " << i << "i" << endl;
    } else {
        real1 = (-b + sqrt(sq))/(2*a);
        real2 = (-b - sqrt(sq))/(2*a);
        if (real1 == real2) {
            cout << "The equation has 2 equal real roots that are " << real1 << " and " << real2 << endl;
        } else {
            cout << "The equation has 2 different real roots that are " << real1 << " and " << real2 << endl;
        }
        
    }
    return 0;
}