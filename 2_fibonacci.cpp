#include<iostream>
using namespace std;

int main()
{
    int t1=0,t2=1,next_term = 0,n;

    cout<<"Enter a number ";
    cin>>n;

    for(int i = 0;i<=n;++i)
    {
        if(i == 0)
        {
            cout<<t1<<",";
            continue;
        }
        if(i == 2)
        {
            cout<<t2<<",";
            continue;
        }
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;

        cout<<next_term<<",";
    }
    return 0;
}