#include<iostream>
#include<math.h>

using namespace std;

double area(double radius) {
    return M_PI * pow(radius, 2);
}

double area(double x1, double x2, double y1, double y2) {
    return abs(x1-x2) * abs(y1-y2);
}

double area(double x1, double y1, double x2, double  y2, double x3, double y3) {
    double a, b, c;
    a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    b = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    c = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    double s = (a + b +c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {
    double radius, x1, x2, x3, y1, y2, y3;
    char option;
    cout << "Input 'T' to get the area of a triangle, 'C' to get the area of a circle, 'R' to get the area of a rectangle: ";
    cin >> option;

    if ((option == 'T') || (option == 't')) {
        cout << "Please input the 3 vertices: ";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        cout << "The area of the triangle is " << area(x1, y1, x2, y2, x3, y3) << endl;

    } else if ((option == 'C') || (option == 'c')) {
        cout << "Please input the radius of the circle: ";
        cin >> radius;
        cout << "The area of the circle is " << area(radius) << endl;

    } else if ((option == 'R') || (option == 'r')) {
        cout << "Please input 2 of the vertices: ";
        cin >> x1 >> y1 >> x2 >> y2;
        cout << "The area of the rectangle is " << area(x1, x2, y1, y2);

    } else {
        cout << "Your input is invalid." << endl;
    }
    return 0;
}