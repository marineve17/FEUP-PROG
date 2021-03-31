#include <iostream>
#include <string>

using namespace std;

bool sequenceSearch(const string &s, int nc, char c) {
    int count = 0;
    bool has_been_found = false;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            char iv = s[i];
            for (int j = i; j < s.size(); j++) {
                char jv = s[j];
                if (!(s[i] == s[j])) {
                    break;
                } else {
                    count++;
                    if (count == nc) {
                        has_been_found = true;
                    }
                }
            }
        }
        if (!has_been_found) {
            count = 0;
        }        
    }
    return has_been_found;    
}

int main() {
    string s;
    int nc;
    char c;

    cout << "Input a sentence: ";
    cin >> s;
    cin.ignore(10000, '\n');

    cout << "Input the character you want to find: ";
    cin >> c;
    cin.ignore(10000, '\n');
    
    cout << "Input the number of times in a row it should appear: ";
    cin >> nc;
    cin.ignore(10000, '\n');

    cout << "The character was" << (sequenceSearch(s, nc, c) == true ? "" : " not") << " found " << nc << " times in a row." << endl;

    return 0;
}