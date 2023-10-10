#include <iostream>

using namespace std;

int main()
{
    float temp;
    int n;

    cout<<"Enter the number of numbers you want to enter :  ";
    cin>>n;

    float arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter "<<i+1<<" element";
        cin>>arr[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0 ; i <n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}