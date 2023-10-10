#include <iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of elements you want to enter : ";
    cin>>n;

    string arr[n];

    cout<<"\n";
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter "<<i+1<<" element : ";
        cin>>arr[i];
    }

    cout<<"\n\nReversed array : \n[";

    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(i == n-1)
        {
            cout<<arr[i];
            continue;
        }
        cout<<" , "<<arr[i];
    }
    cout<<"]\n\n";

    return 0;
}
