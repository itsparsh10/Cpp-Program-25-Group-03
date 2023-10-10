#include <iostream>
#include <string> // for strcmp
using namespace std;

int main() {
    // Create an array of C-style strings
    const char * strings[] = {"cherry","apple", "date", "fig","banana", };

    // Calculate the number of elements in the array
    int n = sizeof(strings)/sizeof(strings[0]);

    // Bubble sort to sort the array of strings in alphabetical order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                // Swap strings[j] and strings[j+1]
                const char* temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }

    // Display the sorted array of strings
    cout << "Strings in alphabetical order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << strings[i] << endl;
    }

    return 0;
}
