#include <iostream>
using namespace std;

int main (){
    int exp;
    int base;
    int result= 1;

    cout<<"Enter the base";
    cin>>base;

    cout<<"Enter the exponent";
    cin>>exp;

    for(exp |=0;exp>0;exp--)
    {
        result*= base;
    }
    cout<<result;
    return 0;
}