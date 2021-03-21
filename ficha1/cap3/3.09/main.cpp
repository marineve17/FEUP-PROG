#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

bool isLeap(int year) {
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int daysIn(int month, int year) {
    if (month == 2) {
        if (isLeap(year)) {
            return 29;
        } else {
            return 28;
        }
    } else if ((month % 2 != 0) || (month == 8)) {
        return 31;
    } else {
        return 30;
    }
    return 0;
}

int getC(int month, int year) {
    switch (month) {
        case (1):
            if (isLeap(year)) {
                return 6;
            } else {
                return 0;
            }
        case (2):
            if (isLeap(year)) {
                return 2;
            } else {
                return 3;
            }
        case (3): return 3;
        case (4): return 6;
        case (5): return 1;
        case (6): return 4;
        case (7): return 6;
        case (8): return 2;
        case (9): return 5;
        case (10): return 0;
        case (11): return 3;
        case (12): return 5;
    }
    return 0;
}

int getDayOfWeek(int month, int year, int day) {
    int s = year / 100;
    int a = year % 100;
    int ds = ((5*a/4) + getC(month, year) + day - 2*(s%4) + 7) % 7;
    return ds;
}

string monthsStr(int month) {
    switch (month) {
        case (1): return "January";
        case (2): return "February";
        case (3): return "March";
        case (4): return "April";
        case (5): return "May";
        case (6): return "June";
        case (7): return "July";
        case (8): return "August";
        case (9): return "September";
        case (10): return "October";
        case (11): return "November";
        case (12): return "December";
    }
    return 0;
}

void displayCalendar(int year) {
    for (int month = 1; month <= 12; month++) {  
        cout << "\x1B[38;2;186;112;250m" << month << "/" << year << " - " << monthsStr(month) << "\x1B[0m" << endl; //displays month/year - <month name>
          
        cout << "\x1B[38;2;223;176;245m" << "Sun" << "\x1B[0m" << setw(5) << "Mon" << setw(5) 
        << "Tue" << setw(5) << "Wed" << setw(5) << "Thu" 
        << setw(5) << "Fri"  << "\x1B[38;2;223;176;245m" << setw(5) << "Sat" << "\x1B[0m" << endl;  //header

        for (int d = 1; d <= daysIn(month, year); d++) {
            int x = getDayOfWeek(month, year, d);
            if (d == daysIn(month, year)) {  //adjusting position of last day
                if (x == 1) {
                    cout << "\x1B[38;2;242;214;255m" << d << "\n" << endl;
                } else {
                    cout << setw(5) << d << "\n" << endl;
                }
            } else if (d == 1) {
                switch (x) {  //aligning first row
                    case (1):
                        cout << " " << "\x1B[38;2;242;214;255m" << d  << "\x1B[0m";
                        break; 
                    case (2):
                        cout << setw(7)  << d;
                        break;
                    case (3): 
                        cout << setw(12) << d;
                        break;
                    case (4):
                        cout << setw(17) << d;
                        break;
                    case (5):
                        cout << setw(22) << d;
                        break;
                    case (6): 
                        cout << setw(27) << d;
                        break;
                    case (0): 
                        cout << "\x1B[38;2;242;214;255m" << setw(32) << d << "\x1B[0m" << endl;
                        break;
                }
            } else if (d < 10) { //aligning 1 digit numbers
                    switch (x) {
                        case (1):
                            cout << " " << "\x1B[38;2;242;214;255m" << d<< "\x1B[0m";
                            break; 
                        case (2):
                            cout << setw(5) << d;
                            break;
                        case (3): 
                            cout << setw(5) << d;
                            break;
                        case (4):
                            cout << setw(5) << d;
                            break;
                        case (5):
                            cout << setw(5) << d;
                            break;
                        case (6): 
                            cout << setw(5) << d;
                            break;
                        case (0): 
                            cout << "\x1B[38;2;242;214;255m" << setw(5) << d << "\x1B[0m" << endl;
                            break;
                    } 
                } else {
                    switch (x) {
                        case (1):
                            cout << "\x1B[38;2;242;214;255m" << d << "\x1B[0m";
                            break; 
                        case (2):
                            cout << setw(5) << d;
                            break;
                        case (3): 
                            cout << setw(5) << d;
                            break;
                        case (4):
                            cout << setw(5) << d;
                            break;
                        case (5):
                            cout << setw(5) << d;
                            break;
                        case (6): 
                            cout << setw(5) << d;
                            break;
                        case (0): 
                            cout << "\x1B[38;2;242;214;255m" << setw(5) << d << "\x1B[0m" << endl;
                            break;
                        }
                    }
            }
        }
}

int main() {
    int year;
    cout << "Input the year you want to get the calendar for: "; //letting user choose the year
    cin >> year;
    cout << "\x1B[2J";

    displayCalendar(year);

    return 0; 
}
           

