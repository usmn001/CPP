#include "Account.h"
using std::string;

Account::Account(string name,double balance):name{name},balance{balance}
{

}

string Account::test()
{
return "Hello World";    
}

bool Account::deposit(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}


bool Account::withdraw(double amount) {
  
  bool status;
   if (balance-amount >=0) 
   {   
    balance-=amount;
    status=true;
   }
   else
   status = false;

return status;

}