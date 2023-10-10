#include <iostream>

using namespace std;

int main()
{
    int n , k ;

    cout<<"Enter the number of numbers you want to enter";
    cin>>n;

    cout<<"\n";
    float arr[n] , temp;

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter "<<i+1<<" element : ";
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

    cout<<"Enter the rank of smallest number you want to see : ";
    cin>>k;

    
    cout<<"\n"<<arr[k-1]<<" is the "<<" smallest number";
    
    return 0;

}