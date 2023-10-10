#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout << "Enter an alphabet: ";
    cin >> alphabet;

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i'||alphabet=='o'||alphabet=='u'
    ||alphabet == 'A' || alphabet == 'E' || alphabet == 'I'||alphabet=='O'||alphabet=='U' )
    {
        cout << "The alphabet enter is vowel."<<endl;
    }
    else{
        cout << "The alphabet enter is consonant."<<endl;
    }
}