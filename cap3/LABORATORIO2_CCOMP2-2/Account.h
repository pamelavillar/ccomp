#include <string>
#include <iostream>
using namespace std;

class Account{
    public: 
        Account(string accountName, int initialBalance): name{accountName}{
            if (initialBalance>0)
                balance=initialBalance;
        }

        void deposit(int depositAmount){
            if (depositAmount>0)
                balance=balance+depositAmount;
        }

        int getBalance()const{
            return balance;
        }

        bool withdraw(int withdrawAmount){
            if (withdrawAmount>balance)
                return false;
            else
                balance=balance-withdrawAmount;
                return true;
        }
        void setname(string accountName){
            name = accountName;
        }

        string getname()const{
            return name;
        }

        void displayAccount(Account accountToDisplay) {
            cout<<"Name account: "<<getname()<<",balance: "<<getBalance()<<endl;
        }
    private:
        string name;
        int balance=0;
};
