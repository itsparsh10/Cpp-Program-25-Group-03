#include <iostream>
using namespace std;
void findTheSingleDigit(int n) {
   if (n == 0) {
      cout << 0;
   }
   else if (n % 9 == 0) {
      cout << 9 << endl;
   }
   else {
      cout << n % 9 << endl;
   }
}
int main() {
   int n;

   cout<<"Enter a number";
   cin>>n;
   findTheSingleDigit(n);
   return 0;
}