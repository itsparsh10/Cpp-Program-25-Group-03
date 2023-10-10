#include <iostream>
using namespace std;

int main() {
    int numRows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    for (int i = 0; i < numRows; i++) {
        int number = 1;

      
        for (int n = 0; n < numRows - i; n++) {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++) {
            cout << number << "   ";
            number = number * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}