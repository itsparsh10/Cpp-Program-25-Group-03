#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool isAscending = true; // Assume the array is sorted in ascending order

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isAscending = false; // If any element is greater than the next one, update the flag
            break; // No need to continue checking, we already know it's not sorted
        }
    }

    if (isAscending) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }

    return 0;
}
