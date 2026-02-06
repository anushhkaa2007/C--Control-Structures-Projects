#include<iostream>
using namespace std;
int main(){
    int choice;
    int balance=5000;
    int amount;
    while(true){
        cout<<"WELCOME TO ATM \n";
        cout<<"1.Check balance \n";
        cout<<"2.Deposit \n";
        cout<<"3.Withdraw money \n";
        cout<<"4.EXIT\n";
        cout<<"Choose your choice - ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Your current bank balance is - "<<balance<<endl;
            break;
            case 2:
            cout<<"Enter amount to be deposited- ";
            cin>>amount;
            balance+=amount;
            cout<<"Your current balance is - "<<balance;
            break;
            case 3:
            cout<<"Enter amount to be withdrawed";
            cin>>amount;
            if(amount<=balance){
                cout<<"Withdrawal succesful \n";
                balance-=amount;
                cout<<"Your remaining balance- "<<balance;
            }else{
                cout<<"Insufficient balance ";
            }
            break;
            case 4:
            cout<<"THANKS FOR VISITING ATM\n";
            break;
            default:
            cout<<"Invalid choice";
            
        } if(choice==4)
            break;
    }



    return 0;
}