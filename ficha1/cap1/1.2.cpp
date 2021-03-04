#include<iostream>

using namespace std;

int main() {
    double A, B, C, mean, Amean, Bmean, Cmean;
    cout << "Please, input 3 integer numbers: " << endl;
    cout << "A: ";
    cin >> A;
    cout << "B: ";
    cin >> B;
    cout << "C: ";
    cin >> C;
    mean = (A+B+C)/3;
    Amean = A - mean;
    Bmean = B - mean;
    Cmean = C - mean;
    cout << "The mean of these numbers is " << mean << endl;
    cout << "A - mean is " << Amean << endl;
    cout << "B - mean is " << Bmean << endl;
    cout << "C - mean is " << Cmean << endl;
    return 0;
}