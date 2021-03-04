#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int i, j, y;
    y = 2;
    i = 3;
    cout << 2 << endl;
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
    } while (y <= 100);

    return 0;
}
