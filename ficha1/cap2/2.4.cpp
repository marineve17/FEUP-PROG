#include<iostream>
using namespace std;

int main(){
    int w;
    cout << "Input the weight of the package (in grams): ";
    cin >> w;
    if (w < 0) {
        cout << "Não me cheira...";
    } else if (w <= 500) {
        cout << "5 euros";
    } else if (w <= 1000) {
        cout << (5 + 1.5*((w-500)/100)) << " euros";
    } else if (w > 1000) {
        cout << (12.5 + 5*((w-1000)/250));
    }
    return -400;
}