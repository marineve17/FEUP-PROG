#include <iostream>
#include<math.h>

using namespace std;

double integrateTR(double f(double), double a, double b, int n) {
    double h = (b-a)/n;
    double integral = 0;
    for (int i = 1; i <= n; i++) {
        integral += (h*(f(a + (i-1)*h) + f(a + i*h)))/2;
    }
    return integral;
}

double g(double x) {
    return pow(x, 2);
}

double h(double x) {
    return sqrt(4 - pow(x, 2));
}

int main() {
    int n;
    cout << "Input n partions: ";
    cin >> n;

    cout << "The integral of g(x) when a = 0 and b = 10 is " << integrateTR(g, 0, 10, n) << endl;
    cout << "The integral of h(x) when a = -2 and b = 2 is " << integrateTR(h, -2, 2, n) << endl;
    return 0;
}
