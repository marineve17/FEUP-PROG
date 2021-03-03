#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float n, delta, maxIter, rq = 1.0, rqn, diff;

    cout << "Input the value, delta and maximum iterations: ";
    cin >> n >> delta >> maxIter;

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
}