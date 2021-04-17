#include <iostream>

using namespace std;

struct Date {
    unsigned int year, month, day;
};

void readDate(Date *d) {
    char sep;
    unsigned int year, month, day;

    cout << "Input a date (YYYY/MM/DD): ";
    cin >> year >> sep>> month >> sep >> day;
    cin.clear();
    cin.ignore(1000, '\n');

    if (sep == '/') {
        (*d).year = year;
        (*d).month = month;
        (*d).day = day;
    } else {
        cout << "Invalid format." << endl;
    }
}

void writeDate(Date *d) {
    cout << (*d).year << "/" << (*d).month << "/" << (*d).day << endl;
}

int compareDates(Date *d1, Date *d2) {
    if ((*d1).year > (*d2).year) return -1;
    else if ((*d1).year == (*d2).year) {
        if ((*d1).month > (*d2).month) return -1;
        else if ((*d1).month == (*d2).month) {
            if ((*d1).day > (*d2).day) return -1;
            else if ((*d1).day == (*d2).day) return 0;
            else return 1;
        } else return 1;
    } else return 1;
}

void sortDates(Date *d1, Date *d2) {
    if (compareDates(d1, d2) == -1) {
        writeDate(d2);
        writeDate(d1);

    } else if (compareDates(d1, d2) == 1) {
        writeDate(d1);
        writeDate(d2);

    } else {
        writeDate(d1);
    }
}

int main() {
    Date *d1 = new Date();
    Date *d2 = new Date();

    readDate(d1);
    readDate(d2);
    sortDates(d1, d2);

    delete d1;
    delete d2;
    return 0;
}