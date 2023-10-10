#include <iostream>
using namespace std;

int main() {
    int size, k;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of K (1-based index): ";
    cin >> k;

    if (k >= 1 && k <= size) {
        // Simple ascending sort using bubble sort
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap elements if they are in the wrong order
                    swap(arr[j], arr[j + 1]);
                }
            }
        }

        cout << "The " << k << "th smallest element is: " << arr[k - 1] << endl;
    } else {
        cout << "Invalid value of K. K should be between 1 and " << size << " inclusive." << endl;
    }

    return 0;
}
