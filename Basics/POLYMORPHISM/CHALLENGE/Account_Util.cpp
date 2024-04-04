#include <iostream>
#include "Account_Util.h"
using std::vector;
using std::cout;


// Displays Account objects in a  vector of Account objects 

void display(const vector<Account*> &accounts)
{
cout << "\n=== Accounts===========================================" << std::endl;
for (const auto &acc: accounts) 
        std::cout << *acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(vector<Account*> &accounts,double amount)
{
 cout << "\n=== Depositing to Accounts =================================" << std::endl;
 for(auto &acc : accounts)
  {
     if(acc->deposit(amount))
     {
        cout << "Deposited " << amount << " to " << *acc <<"\n";
     }
     else
     {
     cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
     }
  }

}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account*> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto &acc:accounts)  
    {
        if (acc->withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    } 
}



