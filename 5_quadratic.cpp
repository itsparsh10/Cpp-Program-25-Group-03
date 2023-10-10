#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    int a,b,c;
    int discriminant=0;
    double root1,root2;


    cout<<"Enter the coefficients for the equation"<<endl;
    cout<<"Enter a"<<endl;
    cin>>a;

    cout<<"Enter b";
    cin>>b;

    cout<<"Enter c";
    cin>>c;

     discriminant = b*b - 4*a*c;

     
    if(discriminant>0)
    {
       cout<<"The roots are real and distinct and the roots are"<<endl;
       root1 = -b + sqrt(discriminant)/2*a;
       root2 = -b - sqrt(discriminant)/2*a;
       cout<<"Root 1 ="<<root1<<endl;
       cout<<"Root 2"<<root2<<endl;
    }
   else if(discriminant==0)
    {
     cout<<"The roots are equal"<<endl;
     root1 = root2 = -b/2*a;
     cout<<"Root 1 ="<<root1<<endl;
       cout<<"Root 2="<<root2<<endl;
    }
    else if(discriminant<0)
    {
        root1 = -b -sqrt(-(b*b - 4*a *c))/2*a;
        root2 = -b +sqrt(-(b*b - 4*a *c))/2*a;
        cout<<"Root 1 ="<<root1<<endl;
       cout<<"Root 2="<<root2<<endl;
    }


    return 0;

     return 0;
  
    

}