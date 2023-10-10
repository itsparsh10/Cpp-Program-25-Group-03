#include<iostream>
using namespace std;

int main() {
  int base, power,result;

  
  cout << "Enter base of num: ";
  cin >> base;
  cout << "Enter power of num: ";
  cin >> power;

  
  for(int i = 1; i<=power;i++ ) 
  {result = pow(base, power);}

  
  cout << "Result: " << result << endl;

  return 0;
}


