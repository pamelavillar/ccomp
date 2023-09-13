#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

int main(){
    Account account1{"Pamela Villar",50};
    Account account2{"Jose Valdivia",7};
    
    account1.displayAccount(account1);
    account2.displayAccount(account2);

    cout<<"\n Enter deposit amount for account: ";
    int depositAmount;
    cin>>depositAmount;
    cout<<"adding S/."<<depositAmount<<" to account balance."<<endl;
    account1.deposit(depositAmount);

    account1.displayAccount(account1);

    cout<<"\n Enter deposit amount for account 2: ";
    cin>>depositAmount;
    cout<<"adding S/."<<depositAmount<<" to account balance."<<endl;
    account2.deposit(depositAmount);

    account2.displayAccount(account2);

}