#include <iostream>
using namespace std;

int main ()
{
    char i;

    cout<<"Enter the alphabet";
    cin>>i;

    if( i == 'a' || i == 'e'|| i == 'i'|| i == 'o'|| i == 'u'
    || i == 'A'|| i == 'E'|| i == 'O'|| i == 'U')
    {
        cout<<i<<" is a vovel";
    }
    else
    {
        cout<<i<<" is a consonant";

    }
    return 0;
}