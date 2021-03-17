#include<iostream>
using namespace std;

int main() {
    int n, cont = 0;
    cout << "Insert integer: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        while ((n%i) == 0) {
            if (cont == 0) {
                cout << i;
                n /= i;
                cont++;
            } else {
                cout << "x" << i;
                n = n/i;
            }
            
        }
    }
}