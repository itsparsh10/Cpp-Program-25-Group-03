#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    
    int array[size];
    cout<<"Enter "<<size<<" element for the array "<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the "<<i+1<<"th element of array: ";
        cin>>array[i];
    }

    int majorityElement=array[0]; 
    int count=1;
    for(int i=0;i<size;i++)
    {
        if(array[i]==majorityElement){
            count++;
        }
        else{
            count--;
        }
    }
    cout<<"The majority element is: "<<majorityElement<<endl;
   
}