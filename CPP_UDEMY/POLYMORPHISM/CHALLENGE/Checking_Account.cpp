#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance) : Account(name,balance)
{
//set_balance(balance);
//set_name(name);
}

bool Checking_Account::deposit(double amount) 
{
return Account::deposit(amount);
}


bool Checking_Account::withdraw(double amount) 
{
 amount += per_check_fee;
 return Account::withdraw(amount);
}

void Checking_Account::print(std::ostream &os) const
{
 os << "[Checking_Account: " << name << ": " << balance  << "]";
}

string Checking_Account::test()
{
return "Hello Checking ";    
}
