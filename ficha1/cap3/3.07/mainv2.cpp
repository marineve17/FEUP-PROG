#include<iostream>
#include<string>

using namespace std;

bool validate(string x);

bool readInt(int &x) {
    string str;
    bool res;
    str = to_string(x);

    for (int i = 0; i <= str.size(); i++) {
        cout << str[i] << endl;
        if ((str[i] >= '0') && (str[i] <= 9)) {
            res = true;
        } else {
            res = false;
        }
    return res;
  }
}

int main() {
    string s;
    int x;
    cout << "Input a number ";
    getline(cin, s);
    cout << s << endl;
    if (validate(s) == true) {
        cout << "The input is valid." << endl;
    } else {
        cout << "The input is invalid." << endl;
    }
    return 0;
}

bool validate(string x) {
    bool res = true;
    for (char& c : x) {
        if (c == ' ') {
            res = false;
        }
    }
    return res;
}