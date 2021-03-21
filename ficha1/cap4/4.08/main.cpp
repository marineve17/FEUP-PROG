#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <vector>

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

void getPlu(vector<vector<int>> &v, int year) {
    srand(time(0));  //defining seed
    int max = 250;  //limiting maximum daily pluviosity

    for (int month = 1; month <= 12; month++) {
        vector<int> monthvec;
        for (int days = 1; days <= daysIn(month, year); days++) {
            monthvec.push_back(rand()%max);
        }

        v.push_back(monthvec);
    } 
}
 
void getMonthlyMean(vector<vector<int>> &v, int year) {
    double Mmean;
    for (int month = 1; month <= 12; month++) {
        for (int d = 0; d < daysIn(month, year); d++) {
           Mmean += v[month-1][d];
        }

        cout << "The mean pluviosity in " << monthsStr(month) << " was " << Mmean/daysIn(month, year) << endl;
        Mmean = 0;    
    }
}

void getDaily(vector<vector<int>> &v, int year) {
    double daily;
    for (int month = 1; month <= 12; month++) {
        for (int d = 0; d < daysIn(month, year); d++) {
           daily += v[month-1][d];
        }   
    }

    int days = ((isLeap(year)) ? 366 : 365);
    cout << "The daily pluviosity average is: " << daily/days << endl;
}

void getMax(vector<vector<int>> &v, int year) {
    for (int month = 1; month <= 12; month++) {
        vector<int> monthly;
        for (int d = 0; d < daysIn(month, year); d++) {
           if (v[month-1][d] == 250) {
               cout << v[month-1][d] << " ";
           } 
        }  
    }
}

int main() {
    int year;
    cout << "Insert year: ";
    cin >> year;

    vector<vector<int>> pluviosity;
    getPlu(pluviosity, year);
    getMonthlyMean(pluviosity, year);
    getDaily(pluviosity, year);
    getMax(pluviosity, year);

    return 0;
}