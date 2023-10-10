#include <iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter the number : "; //Number for which the multiplication table will be displayed.
    cin>>number;

   cout<<"Multiplication table for "<<number<<":"<<endl;

   for(int i = 1 ; i <= 10 ; i++){

//Arrangement of the input number and multplication symbol
    
    cout<<number<< " x " << i << " = " << (number * i) <<endl;
   }
   return 0;
}
