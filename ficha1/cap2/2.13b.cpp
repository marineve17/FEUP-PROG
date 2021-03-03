#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
    float sum = 0, mean, smallest, largest, sd = 0, a;
    int size = 0;
    int arr[100];

    for (int i = 0; i < 30; i++) {
        cout << "Input number (0 to break): ";
        cin >> arr[i];
        if (arr[i] == 0) {
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
