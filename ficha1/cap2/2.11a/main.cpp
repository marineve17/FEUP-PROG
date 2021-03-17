#include<iostream>
using namespace std;

int main() {
    float n, four = 4, three = 3;
    cout << "Input the number of elements you'd like to get the sum of: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i%2 == 0) {
             four = four - (4/three);
        } else {
            four = four + (4/three);
        }
        three = three + 2;
    }
    cout << "The result is " << four;
    return -400000;
}
