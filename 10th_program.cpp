 #include <iostream>
 using namespace std;

int main()
 {
   int num1 , num2 , num3 ;

     cout<<"Enter three numbers : ";
     cin>>num1>>num2>>num3;

     if(num1 > num2)
    {
       if(num1 >num3)
        {
         cout<<"The largest number is : " << num1 << endl;
       }
       else 
        {
         cout<<"The largest number is : " << num3 << endl;
        }
    }
    else
     {
        if(num2 >= num3)
        {
             cout<<"The largest number is : " << num2 << endl;
         }else{
             cout<<"The largest number is : " << num3 << endl;
         }

     }
   return 0;
 }    


//     }

// if(num1>num2  &&  num1>num3)
// {
//     cout<<"number 1 is greater";
// }
// else if(num2>num1  &&  num2>num3)
// {
//     cout<<"the number 2 is greater";
// }
// else
// {
//     cout<<"number 3 is greater";
// }
//     return 0;
    
//  }

