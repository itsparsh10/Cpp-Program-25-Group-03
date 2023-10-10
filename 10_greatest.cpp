#include <iostream>
using namespace std;

int main ()
{
    double a,b,c;

    cout<<"Enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"Enter c";
    cin>>c;

    if(a>b)
    {     
       if(a>c)
        {
           cout<<a<<" is the greatest";
        }
    }
    if(b>c)
    {
        if(b>a)
        {
            cout<<b<<" is the greatest";

        }
    }
    if(c>a)
    {
        if(c>b)
        {
            cout<<c<<" is the greatest";
        }
    }
    return 0;
}
