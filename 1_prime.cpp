#include <iostream>
using namespace std;

int main () 
{
    int n;
    int divisor;
    int i;

    cout<<"Enter a number";
    cin>>n;

    if(n == 0 || n == 1)
    {
        cout<<n<<" is neither prime nor composite";
    }

    for(i = 2;i<n;++i)
    {
        if( n % i == 0)
        {
            divisor += i;
        }
    }
    if(divisor> 1)
    cout<<n<<" is not a prime number";

    else if(divisor<=1)
    cout<<n<<" is a prime number";
    
    return 0;
}