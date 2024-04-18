// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
   
  
   Account *a_ptr1  = new Savings_Account(); 
   Account *a_ptr2  = new Savings_Account("Superman");
   Account *a_ptr3  = new Savings_Account("Batman", 2000);
   Account *a_ptr4  = new Savings_Account("Wonderwoman", 5000, 5.0);
   Account *a_ptr5  = new Checking_Account();
   Account *a_ptr6  = new Checking_Account ("Kirk");
   Account *a_ptr7  = new Checking_Account ("Spock", 2000) ;
   Account *a_ptr8  = new Checking_Account ("Bones",5000);  
   Account *a_ptr9  = new Trust_Account ();
   Account *a_ptr10 = new Trust_Account ("Athos", 10000, 5.0);
   Account *a_ptr11 = new Trust_Account ("Porthos", 20000, 4.0);
   Account *a_ptr12 = new Trust_Account ("Aramis", 30000);
   vector<Account*> accounts {a_ptr1,a_ptr2,a_ptr3,a_ptr4,a_ptr5,a_ptr6,a_ptr7,a_ptr8,a_ptr9,a_ptr10,a_ptr11,a_ptr12};


   a_ptr12->test();
   /*display(accounts);
   deposit(accounts,1000);
   withdraw(accounts, 3000);
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(accounts, 1000);
    

    for(int i=0;i<accounts.size();i++){
        delete accounts.at(i);
    }
   */

    
    return 0;
}

