//ROLL NO.: 22K-4638  class: 2-f
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
   float  Balance;
   static int transaction;
   float interest_rate;
   float Interest;
   public:
   BankAccount(){}
   BankAccount(float initialBalance=0,float rate=0.01){
       interest_rate= rate;
       transaction=0;
      // set_interestAmount(period);
        if(initialBalance>=0){
             Balance=initialBalance;
        }
        else{
            Balance=0;
            cout<<"initial balance was invalid"<<endl;
        }
    }

//get balance
    float get_balance(){
        return Balance;
    }

//cedit
    void credit(float amount ){
            Balance+=amount;
            transaction++;
    }

//debit
    void debit(float amount){
        if(amount> Balance){
            cout<<"debit amount exceed the account balance"<<endl;
        }
        else{
            Balance-=amount;
            transaction++;
        }

    }

 //transaction   
    int get_transaction(){
        return transaction;
    }

//interest
    void set_interestAmount(int period){
        Interest=period*interest_rate*Balance;
        Balance+=Interest;
    }

    float get_interestRate(){
        return interest_rate;
    }
};
int BankAccount :: transaction(0);

int main(){
    cout<<"ROLL NO.: 22K-4638  class: 2-f"<<endl;
    BankAccount account(1000);

    int period;
    float amount;
    int choice;

    do{
        cout<<"Menu"<<endl;
        cout << "1. Display the account balance" << endl;
        cout << "2. Display the number of transactions" << endl;
        cout << "3. Display interest earned for this period" << endl;
        cout << "4. Make a deposit" << endl;
        cout << "5. Make a withdrawal" << endl;
        cout << "6. Add interest for this period" << endl;
        cout << "7. Exit the program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
            cout<<"Your account Balance is: "<<account.get_balance()<<endl;
            break;
            case 2:
            cout<<"No. of transaction are: "<<account.get_transaction()<<endl;
            break;
            case 3:
            cout<<"Enter the period in month: "<<endl;
            cin>>period;
            //account.set_interestAmount(period);
            cout<<"Interest for the given period is: "<<(account.get_interestRate()*period*account.get_balance())<<endl;
            break;
            case 4:
            cout<<"Enter the amount for deposit: "<<endl;
            cin>>amount;
            account.credit(amount);
            cout<<"Amount deposited successfully"<<endl;
            break;
            case 5:
            cout<<"Enter the amount for withdraw: "<<endl;
            cin>>amount;
            account.debit(amount);
            break;
            case 6:
            cout<<"Enter the period in month: "<<endl;
            cin>>period;
            account.set_interestAmount(period);
            cout<<"Interest added to the balance"<<endl;
            break;
            case 7:
            cout<<"terminating the program!"<<endl;
            break;
            default:
            cout<<"invalid choice"<<endl;
        }
    }while(choice!=7);
    
}