#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int getPrecision(float delta);

int main() {
    float n, delta, maxIter, rq = 1.0, rqn, diff;

    cout << "Input the value, delta and maximum iterations: ";
    cin >> n >> delta >> maxIter;
    cout << fixed << setprecision(getPrecision(delta));

    rqn = (rq + n/rq) / 2;
    diff = n - pow(rqn, 2);
    cout << "rq\trqn\tdiff" << endl;
    cout << rq << "\t" << rqn << "\t" << diff << endl;
    rq = rqn;

    for (int i = 1; i <= maxIter; i++) {
        rq = rqn;
        rqn = (rq + n/rq) / 2;
        diff = n - pow(rqn, 2);
        cout << rq << "\t" << rqn << "\t" << diff << endl;
        if (abs(diff) <= delta) {
            break;
        }
    }

    cout << "The square root is aproximately " << rq << endl;
    cout << "The precise root is " << sqrt(n) << endl;
    cout << "The difference between the roots is " << abs(rq - sqrt(n));
}

int getPrecision(float delta) {
    int count = 0;
    for (int i = 0; delta < 1; i++) {
        count++;
        delta *= 10;
    }
    return count;
}