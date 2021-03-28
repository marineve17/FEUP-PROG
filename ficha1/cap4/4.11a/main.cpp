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

    qsort(arr, 10, sizeof(int), comparator);

    cout << "The sorted array is: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}