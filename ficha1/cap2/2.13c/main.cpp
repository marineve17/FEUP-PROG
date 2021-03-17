#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    float sum = 0, mean, smallest, largest, sd = 0, a;
    int size = 0;

    int arr[10];
    for (int i = 0; i < 30; i++) {
        cout << "Input number (eof to break): ";  //to be modified to vector 
        cin >> arr[i];
        if (cin.eof()) {
            break;
        }
        size++;
        cout << sum << endl;
        sum += arr[i];
    }

    cout << "size " << size << endl;
    mean = sum/size;
    cout << "The mean is " << mean << endl;
    cout << "The largest element is " << *max_element(arr, arr + size) << endl;
    cout << "The smallest element is " << *min_element(arr, arr + size) << endl;

    for (int j = 0; j < size; j++) {
        sd += (pow(arr[j] - mean, 2)/(size-1));
    }
    cout << "The standard deviation is " << sd << endl;

    return 7;
}
