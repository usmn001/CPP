#include "Account.h"


class Checking_Account : public Account
{
friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);

private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    static double constexpr def_fee = 1.50;

public : 
bool withdraw(double amount);

Checking_Account(string name=def_name,double balance=def_balance);




};


