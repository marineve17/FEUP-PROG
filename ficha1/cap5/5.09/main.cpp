#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Address {
    string street;
    unsigned int door_num;
    string city;
};

struct Person {
    string name;
    unsigned int age;
    string gender;
    Address address;
};

void readAddress(Address &a) {
    string city, street;
    unsigned int number;

    cout << "Input city: ";
    if (getline(cin, city)) {
        a.city = city;
    }

    cout << "Input door number (do not input chars pls it breaks pls pls): ";
    cin >> number;
    cin.ignore(100, '\n');
    if (number > 0) {
        a.door_num = number;
    } else {
        cout << "Invalid number.";
        
    }

    cout << "Input street: ";
    getline(cin, street);
    a.street = street;
    cout << endl;

}

void readPerson(Person &p) {
    Address a;
    unsigned int age;

    cout << "Input person's name: ";  //Getting name
    getline(cin, p.name);

    cout << "Input person's age: ";  //Getting age
    if ((cin >> age) && age >= 0 && age < 120) {
        p.age = age;
    } else {
        cout << "Invalid age.";
    }

    cout << "Input person's gender: ";  //Getting gender
    cin >> p.gender;

    cin.ignore(100, '\n');

    readAddress(p.address);  //Getting address

}

void readVector(vector<Person> &v) {
    Person person;
    while (true) {
        readPerson(person);
        if (cin.eof()) {  //breaking with eof
            cin.clear();
            cin.ignore(10000, '\n');  
            break;
        }
        v.push_back(person);
    }
}

int main() {
    vector<Person> people;
    vector<string> cities;

    readVector(people);

    for (int i = 0; i < people.size(); i++) {
        string city = people[i].address.city;
        for (int j = 1; j < people.size(); j++) {
            string city2 = people[j].address.city;
            if (i == j) {
                j++;
            } else if (city == city2) {
                string street1 = people[i].address.street;
                string street2 = people[j].address.street;
                if (street1 == street2) {
                    cout << people[i].name << " and " << people[j].name << " live in the same street." << endl;
                }
            }
        }
    }

    return 0;
}