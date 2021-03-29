#include <iostream>
#include <string>

using namespace std;

char encryptChar(char c, int key) { 

    if (!(((c > 60) && (c < 90)) || ((c > 97) && (c < 122)))) {
        return c;  

    } else if (key > 0) {
        if (isupper(c)) {
            return char(((c + key - 65) % 26) + 65);       
        } else {
            return char(((c + key - 97) % 26) + 97);
        }    
    } else {
        if (isupper(c)) {
            int modulo = 0;
            if (((c + key - 65) % 26) < 0) {
                modulo += 26;
            }
            return char((((c + key - 65) % 26) + modulo) + 65);   

        } else {
            int modulo = 0;
            if (((c + key-97) % 26) < 0) {
                modulo += 26;
            }
            return char((((c + key - 97) % 26) + modulo) + 97);
        }        
    }

}
string encryptString(string s,  int key) {
    string final;
    for (auto chara : s) {
        final += encryptChar(chara, key);
    }
    return final;
}

int main() {
    string s;
    int key;
    cout << "Input a sentence: ";
    getline(cin, s);
    cout << "Input key to encrypt: ";
    cin >> key;

    cout << encryptString(s, key) << endl;
    
    return 0;
}
