#include<iostream>
using namespace std;

int main()
{
    cout << "Please, input 3 integer numbers: " << endl;
    cout << "A: ";
    double A;
    cin >> A;
    cout << "B: ";
    double B;
    cin >> B;
    cout << "C: ";
    double C;
    cin >> C;
    double mean;
    mean = (A+B+C)/3;
    double Amean;
    double Bmean;
    double Cmean;
    Amean = A - mean;
    Bmean = B - mean;
    Cmean = C - mean;
    cout << "The mean of these numbers is " << mean << endl;
    cout << "A - mean is " << Amean << endl;
    cout << "B - mean is " << Bmean << endl;
    cout << "C - mean is " << Cmean << endl;
    return 10;
}