#include<iostream>
#include<string>

using namespace std;

int getGCD(int a, int b);
void reduceFraction(int &numerator, int &denominator);
string sum(int &numa, int &dema, int &numb, int&demb);
string subs(int &numa, int &dema, int &numb, int&demb);
string divide(int &numa, int &dema, int &numb, int &demb);
string product(int &numa, int &dema, int &numb, int &demb);

bool readFraction(int &numerator, int &denominator) {
    if (denominator == 0) {
        return false;
    }
    return true;
}

int main() {
    int numerator, denominator, numb, demb;
    cout << "Input a fraction: ";
    char z, c, op;
    cin >> numerator >> z >> denominator;
    if (z == '/') {
        if (readFraction(numerator, denominator) == true) {
            cout << "Valid fration." << endl;
            reduceFraction(numerator, denominator);
        } else {
            cout << "Invalid fraction." << endl;
        }
    } else {
        cout << "Invalid format." << endl;
    }

    cout << "Input an operator: ";
    cin >> op;

    cout << "Input another fraction: ";
    cin >> numb >> c >> demb;
    if (c == '/') {
        if (readFraction(numb, demb) == true) {
            cout << "Valid fration." << endl;
            reduceFraction(numb, demb);
        } else {
            cout << "Invalid fraction." << endl;
        }
    } else {
        cout << "Invalid format." << endl;
    }
    
    switch (op) {
        case ('+'):
            cout << sum(numerator, denominator, numb, demb) << endl;
            break;
        case ('-'):
            cout << subs(numerator, denominator, numb, demb) << endl;
            break;
        case ('*'):
            cout << product(numerator, denominator, numb, demb) << endl;
            break;
        case('/'):
            cout << divide(numerator, denominator, numb, demb) << endl;
            break;
    }
    return 0;
}

void reduceFraction(int &numerator, int &denominator) {
    int gdc;
    gdc = getGCD(numerator, denominator);
    numerator = numerator/gdc;
    denominator /= gdc;
}

int getGCD(int a, int b) {
    if (a == b) {
        return a;
    } else if ((a == 0) || (b == 0)) {
        if (a == 0) {
            return b;
        } else if (b == 0) {
            return a;
        }
    } else {
        while (!(a==b)) {
            if (a>b) {
                a -= b;
            } else {
                b -= a;
            } 
        }
    }
    return a;
}

string sum(int &numa, int &dema, int &numb, int&demb) {
    string final;
    if (dema == demb) {
        numa += numb;
        reduceFraction(numa, dema);
        final = to_string(numa) + "/" + to_string(dema);
    } else {
        numb *= dema;
        numa *= demb;
        dema *= demb;
        numa += numb;
        reduceFraction(numa, dema);
        final = to_string(numa) + "/" + to_string(dema);
    }
    return final;
}

string subs(int &numa, int &dema, int &numb, int&demb) {
    string final;
    if (dema == demb) {
        numa -= numb;
        reduceFraction(numa, dema);
        final = to_string(numa) + "/" + to_string(dema);
    } else {
        numb *= dema;
        cout << numb << endl;
        numa *= demb;
        cout << numa << endl;
        dema *= demb;
        cout << dema << endl;
        numa -= numb;
        cout << numa << endl;
        reduceFraction(numa, dema);
        final = to_string(numa) + "/" + to_string(dema);
    }
    return final;
}

string divide(int &numa, int &dema, int &numb, int &demb) {
    string final;
    numa *= demb;
    dema *= numb;
    reduceFraction(numa, dema);
    final = to_string(numa) + "/" + to_string(dema);
    return final;
}

string product(int &numa, int &dema, int &numb, int &demb) {
    string final;
    numa *= numb;
    demb *= dema;
    reduceFraction(numa, demb);
    final = to_string(numa) + "/" + to_string(demb);
    return final;
}