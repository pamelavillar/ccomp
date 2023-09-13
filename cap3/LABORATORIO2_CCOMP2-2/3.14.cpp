#include <iostream>
#include <string>
#include "Account14.h"
using namespace std;

int main(){
    Account newAccount{23949, "Julio", "Torres", 2350.0};

    
    newAccount.displayAccount(newAccount);

}