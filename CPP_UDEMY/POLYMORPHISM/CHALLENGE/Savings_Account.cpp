#include "Savings_Account.h"
using std::string;
Savings_Account::Savings_Account(std::string name, double balance, double int_rate) : Account(name,balance),int_rate{int_rate} 
{
//set_name(name);
//set_balance(balance);
}


/*bool Savings_Account::set_name(string nam)
{
name = nam;
return true;
}


bool Savings_Account::set_balance(double bal)
{
balance=bal;
return true;
}*/

bool Savings_Account::withdraw(double amount) 
{
return Account::withdraw(amount);

}




// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//
bool Savings_Account::deposit(double amount) 
{ 
amount += amount * (int_rate/100);
return Account::deposit(amount);
}


void Savings_Account::print(std::ostream &os) const
{
 os << "[Savings_Account: " << name << ": " << balance  << ","<<  int_rate << "]";
}

string Savings_Account::test()
{
return "Hello Savings ";    
}
