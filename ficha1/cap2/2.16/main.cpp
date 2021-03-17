#include <stdlib.h>
#include<ctime>
#include<string>
#include<iostream>

using namespace std;

string removeSpaces(string x);
double getOp(string a);

float calculate(float a, char op, float b) {
    float res;
    if (op == '+') {
        res = a+b;
    } else if (op == '-') {
        res = a-b;
    } else if (op == '*') {
        res = a*b;
    } else if (op == '/') {
        if (b == 0) {
            return -1;
        } else {
            res = a/b;
        }
    }
    return res;
}

int main() {
    string x, a, b;
    double mem = 0;
    cout << "Input a <operator> b: ";
    getline(cin, x);
    a = removeSpaces(x);
    cout << a << endl;
    /* while (!cin.eof()) {
        getline(cin, x);
        validate(x);
    } */
    b = getOp(a, mem);
    cout << b << endl;
    return 0;
}

string removeSpaces(string x) {
    string res;
    for (char& c : x) {
        if (c == ' ') {
            continue;
        }
        res += c;
    }
    return res;
}

double getOp(string a, double mem) {
    double k, res = 0;
    if (a[0] == 'M') {
        if (a[1] == 'C') {
            mem = 0;
        } else if (a[1] == '+') {
            mem += static_cast<double>(a.substr(2, a.length()));
        }
    }
    return res;
}
/*     for (int i = 0; i < srt[]; i++) {

    }
    for (int i = 1; i <= x.size(); i++) {
        srt[i] = 
        cout << "char" << endl;
    } */