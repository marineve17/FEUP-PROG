#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
    float sum = 0, mean, smallest, largest, sd = 0, a;
    int n;

    cout << "Input the number of elements in the sequence: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Input number: ";
        cin >> arr[i];
        sum += arr[i];
    }

    mean = sum/n;
    cout << "The mean is " << mean << endl;
    cout << "The largest element is " << *max_element(arr, arr + n) << endl;
    cout << "The smallest element is " << *min_element(arr, arr + n) << endl;

    for (int j = 0; j < n; j++) {
        sd += (pow(arr[j] - mean, 2)/(n-1));
    }
    cout << "The standard deviation is " << sd << endl;

    return 7;
}
