#include <stdlib.h>
#include<ctime>
#include<iostream>

using namespace std;

int main(){
    int n, a, calc, guess;
    long long tim;
    srand(time(NULL));
    rand();

    n = rand() % (9 - 2 + 1) + 2;
    a = rand() % (9 - 2 + 1) + 2;
    calc = a*n;
    cout << "Input the product of " << n << " and " << a << ": ";
    long long start = time(NULL);
    cin >> guess;
    long long end = time(NULL);
    tim = end - start;

    if (guess == calc) {
        if (tim <= 5 ) {
            cout << "Good" << endl;
        } else if (tim <= 10) {
            cout << "Satisfactory" << endl;
        } else {
            cout << "Insufficient" << endl;
        }
    } else {
        cout << "Very bad" << endl;
    }
    return 0;
}