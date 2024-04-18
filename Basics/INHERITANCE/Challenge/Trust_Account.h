
#include "Savings_Account.h"


class Trust_Account : public Savings_Account
{

friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

private :  
static constexpr const char *def_name = "Unnamed Account";
static constexpr double def_balance = 0.0;
static constexpr double def_int_rate = 0.0;
static constexpr int max_withdrawls = 3;
static constexpr float max_withdraw_percent = 0.2;

protected :
int num_withdrawls;

public:
bool deposit(double amount);
bool withdraw(double amount);
Trust_Account(string name=def_name,double balance=def_balance,double int_rate=def_int_rate);


};