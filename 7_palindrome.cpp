#include <iostream>
using namespace std;

int main ()
{
    cout<<"Paindrome number check"<<endl;
    string a,temp;
    int i = 0,j;

    cout<<"Enter the string to be checked";
    cin>>a;

    temp = a;

    j = a.length() - 1;

    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }

    if(temp == a)
    {
        cout<<"The string is palindrome";
    }
    else
    {
        cout<<"The string is not palindrome";
    }
    return 0;

}