#include <iostream>
#include <string>
#include "Account2.h"
using namespace std;

int main(){
    Account myAccount{"Pamela Villar",50};
    
    //cout<<"Initial account name is: "<<myAccount.getname();
    //cout<<"\nPlease enter the account name: ";

    //string theName;
    //getline(cin,theName);
    //myAccount.setname(theName);

    cout<<"Name account: "<<myAccount.getname()<<", balance: "<<myAccount.getBalance();

    cout<<"\n Enter deposit amount for account: ";
    int depositAmount;
    cin>>depositAmount;
    cout<<"adding S/."<<depositAmount<<" to account balance.";
    myAccount.deposit(depositAmount);

    cout<<"\n\nBalance: S/."<<myAccount.getBalance();

    cout<<"\nMoney to withdraw: ";
    int withdrawAmount;
    cin>>withdrawAmount;

    if (myAccount.withdraw(withdrawAmount)==false)
        cout<<"\nWithdrawal amount exceeded account balance.";
    else
        cout<<"\nwithdrawing S/."<<withdrawAmount<<" to account balance.";

    cout<<"\n\nBalance: S/."<<myAccount.getBalance();









}