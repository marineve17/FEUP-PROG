#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int getPrecision(float delta) {
    int count = 0;
    for (int i = 0; delta < 1; i++) {
        count++;
        delta *= 10;
    }
    return count;
}

double calculateSqrt(float n, float delta, float maxIter) {
    float rq = 1.0, rqn, diff;   
    cout << fixed << setprecision(getPrecision(delta));
    rqn = (rq + n/rq) / 2;
    diff = n - pow(rqn, 2);

    for (int i = 1; i <= maxIter; i++) {
        rq = rqn;
        rqn = (rq + n/rq) / 2;
        diff = n - pow(rqn, 2);
        if (abs(diff) <= delta) {
            break;
        }
    }
    return rqn;
}

int main() {
    float n, delta, maxIter, rq = 1.0, rqn, diff;

    cout << "Input the value, delta and maximum iterations: ";
    cin >> n >> delta >> maxIter;
    cout << "The square root is aproximately " << calculateSqrt(n, delta, maxIter) << endl;

    return 0;
}