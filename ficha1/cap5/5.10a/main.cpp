#include <iostream>
#include <vector>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Polygon {
    vector<Point> points;
};

void readVector(vector<Point> &points) {
    double x, y;
    while (true) {
        cout << "Input the coordinates of a point: ";
        if (cin.eof()) 
            break;

        else {
            cin << 
        }
    }

}

int main() {
    vector<Point> points;

    readVector(points);

    return 0;
}