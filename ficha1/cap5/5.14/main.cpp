#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void readName(string name) {
    istringstream in(name);
    ostringstream out;

    string n;
    while (in >> n) {
        for (int i = 0; i < n.size(); i++) {
            if (isupper(n[i])) {
                continue;
            } else {
                n[i] = toupper(n[i]);
            }
        }

        if ((n == "DE") || (n == "DOS") || (n == "DAS") || (n == "DO") || (n == "DA") || (n == "E")) {
            continue;
        } else 
            out << n << " "; 
    }
    cout << out.str() << endl;

}

int main() {
    string name;

    cout << "Input name: ";
    getline(cin, name);

    readName(name);

    return 0;

}