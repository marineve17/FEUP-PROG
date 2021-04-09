#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> removeParticles(vector<string> names) {
    vector<string> finalnames;

    for (int i = 0; i < names.size(); i++) {
        if ((names[i] != "DE") && (names[i] != "DO") && (names[i] != "DA") && (names[i] != "DOS") && (names[i] != "DAS") && (names[i] != "E")) {
            finalnames.push_back(names[i]);
        }
    }
    return finalnames;
}

vector<string> removeSpaces(string &name) {
    vector<string> names;
    string namezito;

    for (int i = 0; i < name.length(); i++) {
        if (isspace(name[i]) && namezito != "") {
            names.push_back(namezito);
            namezito.clear();
        } else if (name[i] != ' ') {
            if (islower(name[i])) {
                namezito += char(name[i] - 32);
            } else {
                namezito += name[i];
            }
        
        }

        if (i == name.length() - 1) {
            names.push_back(namezito);            
        }
    }

    return names;
}

string normalizeName(string &name) {
    vector<string> names = removeSpaces(name);
    vector<string> names2 = removeParticles(names);
    string final;

    for (auto elem : names2) {
        final += elem;
        final += " ";
    }
    
    return final;
}

int main() {
    string name;

    cout << "Input name: ";
    getline(cin, name);

    cout << normalizeName(name) << endl;

}
