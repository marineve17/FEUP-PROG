#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float n, q, j, m;
    cout << "Input years, amout and annual interest rate(%): ";
    cin >> n >> q >> j; 
    m = q*(pow((1+(j/100)), n));
    cout << "After " << n << " years you can withdraw " << m << " moneys.";
    return 0;
}