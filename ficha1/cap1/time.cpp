#include<iostream>
using namespace std;

int main()
{
    int horas1;
    int min1;
    int seg1;
    int horas2;
    int min2;
    int seg2;
    cout << "Input Time1 (hours minutes seconds): ";
    cin >> horas1;
    cin >> min1;
    cin >> seg1;
    cout << "Input Time2 (hours minutes seconds): ";
    cin >> horas2;
    cin >> min2;
    cin >> seg2;
    int hfinal;
    int mfinal;
    int sfinal;
    int days;
    days = 0;
    if ((seg1 + seg2) > 60)
        sfinal = seg1 + seg2 - 60;
        min1++;
    if ((seg1 + seg2) == 60)
        sfinal = 0;
    if ((seg1 + seg2) < 60)
        sfinal = seg1 + seg2;
    if ((min1 + min2) > 60)
        mfinal = min1 + min2 - 60;
        horas1++;
    if ((min1 + min2) == 60)
        mfinal = 0;
    if ((min1 + min2) < 60)
        mfinal = min1 + min2;
    if ((horas1 + horas2) > 24) {
        hfinal = horas1 + horas2 - 24;
        days++;
    } else if ((horas1 + horas2) == 24) {
        hfinal = 0;
        days++;
    }   
    if ((horas1 + horas2) < 24)
        hfinal = horas1 + horas2;
    cout << "Time1 + Time2 = " << days << " day, " << hfinal << " hours, " << mfinal << " minutes and " << sfinal << " seconds.";
    return -1;
}