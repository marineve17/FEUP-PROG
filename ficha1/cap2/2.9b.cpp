#include <iostream>
#include<math.h>
using namespace std;

int reverse(unsigned int n);

int main() {
    unsigned int a, b, c, dig;
    cout << "Input a number: ";
    cin >> a;
    b = a;

    //get digits
    do {
        dig++;
        a = a/10;
    } while (a);

    //:caos:
    if ((dig % 2) == 0) {
        c = pow(10, (dig/2));
        if ((fmod(b, (pow(10, dig/2)))) == reverse(b/c)) {
            cout << "The number is a palindrome." << endl;
        } else {
            cout << "The number is not a palindrome." << endl;
        }
    }  else if ((dig % 2) != 0) {
        c = pow(10, ((dig+1)/2));
        if ((fmod(b, (pow(10, dig/2)))) == reverse(b/(c))) {
            cout << "The number is a palindrome." << endl;
        } else {
            cout << "The number is not a palindrome." << endl;
        }
    } 
    
    return 0;
}

int reverse(unsigned int n) {
    int rev = 0, sum;
    while (n!=0) {
        sum = n%10;
        rev = rev*10 + sum;
        n = n/ 10;
    }
    return rev;
}

//.meme drake: aplicar reverse() ao número e ver se é igual || fazer isto tudo
//ao menos o código está colorido :')