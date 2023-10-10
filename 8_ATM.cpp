#include <iostream>
using namespace std;

int main()
{
int balance=10000;
 cout<<"Welcome to xyz Bank"<<endl;
 cout<<"How can we help you"<<endl;

int choice;



cout<<"1) Check balance "<<endl;
cout<<"2) Withdraw money"<<endl;
cout<<"3) Deposit money"<<endl;

cout<<"Enter your choice";
cin>>choice;


switch(choice)
{
    case 1:
    cout<<balance;
    break;

    case 2:
    cout<<"What is the amount to be withdrawn";
    int w;
    cin>>w;
    balance -= w;
    cout<<"New balance ="<<balance;
    break;


    case 3:
    cout<<"What is the amount to be deposited";
    int d;
    cin>>d;
    balance += d;
    cout<<"New balance ="<<balance;
    break;

    default:
    {
        cout<<"Transaction unsuccesfull";
    }
    return 0;

}



}
 
