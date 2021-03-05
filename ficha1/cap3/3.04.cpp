#include<iostream>
#include<iomanip>

using namespace std;

double round(double x, unsigned n) {
    cout << fixed << setprecision(n);
    return x;
}

int main() {
    double x;
    unsigned int n;
    cout << "Input the number you'd like to round, followed by the number of decimal places: ";
    cin >> x >> n;
    cout << "The rounded number is " << round(x, n) << endl;
    return 0;
}