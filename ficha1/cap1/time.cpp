#include<iostream>
using namespace std;

int main()
{
    int horas1, min1, seg1, horas2, min2, seg2, hfinal, mfinal, sfinal, days = 0, segtotal;
    cout << "Input Time1 (hours:minutes:seconds): ";
    cin >> horas1 >> min1 >> seg1;
    cout << "Input Time2 (hours:minutes:seconds): ";
    cin >> horas2 >> min2 >> seg2;

    segtotal = horas1*3600 + horas2*3600 + min1*60 + min2*60 + seg1 + seg2;
    days = segtotal/86400;
    segtotal = segtotal%86400;
    hfinal = segtotal/3600;
    segtotal = segtotal % 3600;
    mfinal = segtotal/60;
    sfinal = segtotal % 60;

    cout << "Time1 + Time2 = " << days << " day, " << hfinal << " hours, " << mfinal << " minutes and " << sfinal << " seconds.";
    return -1;
}
