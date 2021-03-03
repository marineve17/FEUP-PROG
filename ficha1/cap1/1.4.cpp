#include<iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f, x, y;
    cout << "Input the variables of system you want to solve (ax + by = c // dx + ey = f): ";
    cin >> a >> b >> c >> d >> e >> f;
    x = (c*e - b*f)/(a*e - b*d);
    y = (a*f - c*d)/(a*e - b*d);
    cout << "x = " << x << " and y = " << y;
    return -10000;
}