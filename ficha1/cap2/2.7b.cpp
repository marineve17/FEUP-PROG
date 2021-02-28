#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n, i, j;
    for (i = 3; i <= 100; i++) {
        for (j = 2; j < i; j++) {
            if ((i % j) == 0) {
                break;
            } else if (j == i-1) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}