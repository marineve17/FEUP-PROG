#include<iostream>
#include<math.h>

using namespace std;

int main() {
    double M, r, d, mass, pi;
    cout << "Input the radius of the sphere in m: ";
    cin >> r;
    cout << "Input the density of the sphere in Kg/m**3: ";
    cin >> d;
    pi = 3.1415926;
    mass = 4*(d*pi*pow(r, 3))/3;
    cout << "The mass of the sphere is " << mass << endl;
    return 0;
}