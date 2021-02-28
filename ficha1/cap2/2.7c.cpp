#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int i, j, y;
    y = 1;
    i = 3;
    do {
        for (j = 2; j < i; j++) {
            if ((i % j) == 0) {
                i++;
                break;
            } else if (j == i-1) {
                cout << i << endl;
                i++;
                y++;
                break;
            }
        }
    } while (y < 100);

    return 0;
}