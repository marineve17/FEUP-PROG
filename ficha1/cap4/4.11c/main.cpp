#include <iostream>
#include <cstdlib>

using namespace std;

int comparator(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) {
        return 1;
    } else if (*(int*)a == *(int*)b) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    int arr[10] = {6, 1, 3, 5, 10, 8, 2, 9, 4, 7};

    cout << "The initial array is: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr1[5], arr2[5];

    for (int i = 0; i < 5; i++) {
        arr1[i] = arr[i];
        arr2[i] = arr[i+5];
    }

    qsort(arr1, 5, sizeof(int), comparator);
    qsort(arr2, 5, sizeof(int), comparator);

    cout << "The sorted array (in halves) is: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    
    cout << endl;

    return 0;
}