#include <iostream>

using namespace std;

int main()
{
    int n , a;

    cout<<"Enter the number of elements you want to enter : ";
    cin>>n;

    string arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter "<<i+1<<" element : ";
        cin>>arr[i];
    }

    for(int i =0 ; i < n ; i++)
    {
        a = 0;
        for(int j = 0  ; j < n ; j++)
        {
            if(arr[i] == arr[j])
            {
                a++;
                if(a > (n/2))
                {
                    cout<<"\n"<<arr[i]<<" is majority ";
                    return 0;
                }
            }
        }
    }

    return 0;
}