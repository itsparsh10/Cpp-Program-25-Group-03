#include<iostream>
using namespace std;

int main ()
{
    int a,b,c,d,e;

    double total;

    double percentage;

    cout<<"Enter the marks obtained out of 100"<<endl;

    cout<<"Enter english marks"<<endl;
    cin>>a;

    cout<<"Enter chemistry marks"<<endl;
    cin>>b;

    cout<<"Enter the physics marks"<<endl;
    cin>>c;

    cout<<"Enter the maths marks"<<endl;
    cin>>d;

    cout<<"Enter the biology marks"<<endl;
    cin>>e;

    total= a+b+c+d+e;

    if(total>=450)
    {
        cout<<"The grade is A+";
    }
    else if(total>=400){
        cout<<"The grade is B+";
    }
    else if(total>=350)
    {
        cout<<"The grade is C++";
    }
    else if(total>=300)
    {
        cout<<"The grade is D";
    }
    else 
    {
        cout<<"You are not eligible for grades";
    }

    return 0;
   
}