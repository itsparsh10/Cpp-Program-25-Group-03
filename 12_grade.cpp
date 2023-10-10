#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Grade Calculator" << endl;
    cout << "Enter your Name: ";
    cin >> name;

    float Physics, Chemistry, Math, Biology,  English, Percent, Total;

    cout << "Enter your Marks out of 100" << endl;
    cout << "Physics" << endl;
    cin >> Physics;
    if (Physics > 100)
    {
        cout << "Please enter marks out of 100" << endl;
        return 1;
    }

    cout << "Chemistry" << endl;
    cin >> Chemistry;
    if (Chemistry > 100)
    {
        cout << "Please enter marks out of 100" << endl;
        return 1;
    }

    cout << "Math" << endl;
    cin >> Math;
    if (Math > 100)
    {
        cout << "Please enter marks out of 100" << endl;
        return 1;
    }

    cout << "Biology" << endl;
    cin >> Biology;
    if (Biology > 100)
    {
        cout << "Please enter marks out of 100" << endl;
        return 1;
    }

    cout << "English" << endl;
    cin >> English;
    if (English > 100)
    {
        cout << "Please enter marks out of 100" << endl;
        return 1;
    }

    Total = Physics + Chemistry + Math + Biology + English;

    Percent = Total / 500 * 100;
    cout << "You achieved " << Percent << "%" << endl;

    if (Percent <= 100 && Percent >= 90)
    {
        cout << "GRADE:A" << endl;
    }
    else if (Percent <= 89 && Percent >= 70)
    {
        cout << "GRADE:B" << endl;
    }
    else if (Percent <= 69 && Percent >= 50)
    {
        cout << "GRADE:C" << endl;
    }
    else if (Percent <= 49 && Percent >= 30)
    {
        cout << "GRADE:D" << endl;
    }
    else if (Percent <= 29 && Percent >= 10)
    {
        cout << "GRADE:E" << endl;
    }
    else
    {
        cout << "GRADE:F" << endl;
    }
}