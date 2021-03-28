#include <iostream>

using namespace std;

int main() {
    //The program
    int values[] = { 2, 3, 5, 7, 11, 13 };
    int*p = values+1;
    cout << values[1] << endl;  //will print the second element (position 1) in the array values (aka 3)
    cout << values+1 << endl;  //will print the address used to store the first position of array values 
    cout << *p << endl;  //will print the first position of the array values (aka 3)
    cout << *(values+3) << endl;  //will print the 4th position in the array values (aka 7)
    cout << p+1 << endl;  //will print the address used to store the 3rd position in the array values
    cout << p[1] << endl;  //as p is the address of the second element, p[1] will print the information stored in address p + 4 (aka 3rd element in array values)
    cout << p-values << endl; //???

    return 0;
}
