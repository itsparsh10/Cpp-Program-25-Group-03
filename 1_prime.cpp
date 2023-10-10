#include <iostream>
using namespace std;
int main()
{
    int number, divisor;
    bool isPrime = true;

    cout << "Enter the number to check the number is prime or not " << endl;
    cin >> number;

    if (number < 1)
    {
        cout << "Please enter number grater than 0" << endl;
    }
    else if (number == 1)
    {
        cout << number << " is neither prime nor composite " << endl;
    }
    else
    {
        for (divisor = 2; divisor <= (number / 2); divisor++)
        {
            if ((number % divisor) == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime == false)
    {
        cout << " Enter number is not prime number:" << number << endl;
    }
    else
    {
        cout << " Enter number is prime number:" << number << endl;
    }
    return 0;
}