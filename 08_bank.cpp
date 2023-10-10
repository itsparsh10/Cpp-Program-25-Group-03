// Implement a C++ program that simulates a simple ATM machine, allowing users to check their balance, deposit, or withdraw money using a switch statement.
#include<iostream>
using namespace std;
int main(){
    
    double bankbalance = 10000.00;
    while (true) {
        int choice;
        cout<<"ATM Menu: " <<endl;
        cout<<" 1. Check Your Balance "<<endl;
        cout<<" 2. Deposit Your Money "<<endl;
        cout<<" 3. Withdraw Your Money "<<endl;
        cout<<" 4. Exit "<<endl;
        cout<<" Enter your choice b/w 1-4 "<<endl;
        cin>>choice;
        

        switch(choice) {
            case 1:
            cout<<" Your Balance "<<bankbalance<<endl;
            break;
            
            case 2:
            double depositmoney;
            cout<<" Enter your Deposit Amount ";
            cin>>depositmoney;
            if(depositmoney>0){
                
                cout<< "Your Current balance after Deposit is .."<<bankbalance + depositmoney<<endl;
            }else{
                cout << " Please enter a positive number.";
            }
            cin>>depositmoney;
            break;
            
            
            
            case 3:
            double Withdraw;
            cout<<" Enter your Withdraw Amount "<<endl;
            cin >> Withdraw ;

            if(Withdraw>0){
                
                cout<< "Your Current balance after Withdraw is .."<< bankbalance - Withdraw<<endl;
            }else{
                cout << " Please enter a positive number.";
            }
            cin>>Withdraw;
            break;




            case 4:
            cout<<"Thank you for using the ATM. GOODBYE..!" <<endl;
            return 0;

            default:
            cout<<"Invalid choice. Please select a valid option (1-4)." <<endl;


            


        }
        





    }
    return 0;
}
