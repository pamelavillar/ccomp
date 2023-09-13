#include <string>
#include <iostream>
using namespace std;

class Account {
public: 
    Account(unsigned int aNumber, string fName, string lName, double iBalance): accountNumber{aNumber}, firstName{fName}, lastName{lName} {
        if (iBalance > 0)
            balance = iBalance;
    }

    void displayAccount(Account accountToDisplay) {
            cout<<"Name account: "<<firstName<<" "<<lastName<<endl;
            cout<<"Balance: "<<balance<<endl;
        }

private:
    unsigned int accountNumber;
    string firstName;
    string lastName;
    double balance = 0;
};
