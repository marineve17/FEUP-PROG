#include <iostream>
#include <sstream>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;

class Date{
    public: 
        Date();
        Date(unsigned int year, unsigned int month, unsigned int day);
        Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
        void setYear(unsigned int year) ; 
        void setMonth(unsigned int month) ;
        void setDay(unsigned int day) ;
        void setDate(unsigned int year, unsigned int month, unsigned int day) ;
        unsigned int getYear()const;
        unsigned int getMonth()const; 
        unsigned int getDay()const;
        string getDate()const;  // returns the date in format "yyyy/mm/dd"
        void show()const;       // shows the date on the screen in format "yyyy/mm/dd"
        bool isValid();
        bool isEqualTo(const Date &date);
        bool isNotEqualTo(const Date &date);
        bool isAfter(const Date &date);
        bool isBefore(const Date &date);
    private: 
        unsigned int year; 
        unsigned int month;
        unsigned int day;
        unsigned int daysmonth(unsigned int year, unsigned int month);
};

Date::Date() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    
    this->day = ltm->tm_mday;
    this->month = 1 + ltm->tm_mon;
    this->year = 1900 + ltm->tm_year;
}

Date::Date(unsigned int year, unsigned int month, unsigned int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

Date::Date(string yearMonthDay) {  //ta mal
    this->year = stoi(yearMonthDay.substr(0,4));
    this->month = stoi(yearMonthDay.substr(5,7));
    this->day =stoi(yearMonthDay.substr(9,11));
}

bool Date::isValid() {
    if (day > daysmonth(year, month)) {
        return false;
    } else return true;
}

unsigned int Date::daysmonth(unsigned int year, unsigned int month) {
    bool leap = false;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        leap = true;
    }

    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        case 2:
            if (leap == true) 
                return 29;
            else return 28;
    }
}

void Date::setYear(unsigned int year) {
    this->year = year;
}

void Date::setMonth(unsigned int month) {
    this->month = month;
}

void Date::setDay(unsigned int day) {
    this->day = day;
}

void Date::setDate(unsigned int year, unsigned int month, unsigned int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

unsigned int Date::getYear() const {
    return year;
}

unsigned int Date::getMonth() const {
    return month;
}

unsigned int Date::getDay() const {
    return day;
}

string Date::getDate() const {
    ostringstream out;
    out << year << '/' << month << '/' << day;
    return out.str();
}

void Date::show() const {
    cout << getDate() << endl;
}

bool Date::isEqualTo(const Date &date) {
    if ((date.year == this->year) && (this->month == date.month) && (this->day == date.day)) {
        return true;
    } else return false;
}

bool Date::isNotEqualTo(const Date &date) {
    return !(Date::isEqualTo(date));
}

bool Date::isAfter(const Date &date) {
    if (isEqualTo(date)) {
        return false;
    }
    else if (this->year > date.year) {
        return false;
    } else if (this->year == date.year) {
        if (this->month > date.month) {
            return false;
        } else if (this->month == date.month) {
            if (this->day > date.day) {
                return false;
            } else return true;
        } else return true;
    } else return true;
}

bool Date::isBefore(const Date &date) {
    return !(Date::isAfter(date));
}

unsigned int fill(unsigned int n) {
    if (to_string(n).length() == 1) {
        ostringstream str;
        str << setfill('0') << setw(1) << n;
        n = stoi(str.str());
    }  
}

int main() {
    Date date1, date2;    
    unsigned int year, month, day;
    char sep = '/';

    cout << "Input year: ";
    cin >> year;

    cout << "Input month: ";
    cin >> month;
    fill(month);

    cout << "Input day: ";
    cin >> day;
    fill(day);

    date1 = Date();
    date1.show();

    date2 = Date(year, month, day);
    date2.show();

    if (date1.isAfter(date2)) {
        cout << date1.getDate() << endl;
    } else {
        cout << date1.getDate() << " is after " << date2.getDate() << endl;
    }

    return 0;
}
