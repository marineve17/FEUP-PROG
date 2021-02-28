#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float ax, bx, cx, ay, by, cy, s, a, b, c, area;
    //input coordinates
    cout << "Input coordinates of point A (format: x y): ";
    cin >> ax >> ay;
    cout << "Input coordinates of point B (format: x y): ";
    cin >> bx >> by;
    cout << "Input coordinates of point C (format: x y): ";
    cin >> cx >> cy;
    //calculos
    a = sqrt(pow((bx - ax), 2) + pow((by - ay), 2));
    cout << a << endl;
    b = sqrt(pow((cx - bx), 2) + pow((cy - by), 2));
    c = sqrt(pow((cx - ax), 2) + pow((cy - ay), 2));
    cout << b << endl;
    cout << c << endl;

    s = (a + b +c)/2;
    cout << s << endl;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "The area of the triangle is " << area;
    return -3000;
}