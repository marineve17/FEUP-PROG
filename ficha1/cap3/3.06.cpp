#include<iostream>
#include<ctime>

using namespace std;

time_t timeElapsed() {
    long long a = time(NULL);
    return a;
}

int main() {
    long long a, b;
    char e, r;
    cout << "Press any key to start timer ";
    cin >> e;
    if (cin.good()) {
        a = timeElapsed();
    }
    while (cin.good()) {
        cout << "Press any key to bookmark time (to quit: Ctrl + Z (win) / Ctrl + D (linux)) ";
        char r;
        cin >> r;
        b = timeElapsed();
        if (cin.eof()) {
            break;
        }
        cout << " > It has been " << b - a << " seconds since you first started the timer." << endl;
    }
    return 0;
}