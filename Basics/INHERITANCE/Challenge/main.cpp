// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
     // Checking 

    vector<Checking_Account> che_accounts;
    che_accounts.push_back(Checking_Account {} );
    che_accounts.push_back(Checking_Account {"Kirl"} );
    che_accounts.push_back(Checking_Account {"Spock", 2000} );
    che_accounts.push_back(Checking_Account {"Bones", 5000} );

    display(che_accounts);
    deposit(che_accounts, 1000);
    withdraw(che_accounts, 2000);
     

      // Trust

    vector<Trust_Account> tru_accounts;
    tru_accounts.push_back(Trust_Account {} );
    tru_accounts.push_back(Trust_Account {"Athos",10000,5.0} );
    tru_accounts.push_back(Trust_Account {"Pothos", 20000,4.0} );
    tru_accounts.push_back(Trust_Account {"Aramis", 30000, 0.0} );

    display(tru_accounts);
    deposit(tru_accounts, 1000);
    withdraw(tru_accounts, 3000); 

   for(int i=1;i <=5;i++)
   {
    withdraw(tru_accounts, 1000); 
   }

    return 0;

}

