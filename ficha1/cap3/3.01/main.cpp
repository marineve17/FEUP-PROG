#include<iostream>
#include<math.h>
using namespace std;

double distance(double x1, double y1, double x2, double y2);
double area(double s, double a, double b, double c);

int main(){
    double ax, bx, cx, ay, by, cy, s, a, b, c, r;
    char p;

    cout << "Input coordinates of point A (format x,y): ";
    cin >> ax >> p >> ay;
    cout << "Input coordinates of point B (format x,y): ";
    cin >> bx >> p >> by;
    cout << "Input coordinates of point C (format x,y): ";
    cin >> cx >> p >> cy;

    a = distance(ax, ay, bx, by);
    b = distance(bx, by, cx, cy);
    c = distance(ax, ay, cx, cy);

    s = (a + b +c)/2;

    r = area(s, a, b, c);

    cout << "The area of the triangle is " << r;
    return -3000;
}

double distance(double x1, double y1, double x2, double  y2) {
    double a;
    a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return a;
}

double area(double s, double a, double b, double c) {
    double r;
    r = sqrt(s*(s-a)*(s-b)*(s-c));
    return r;
}