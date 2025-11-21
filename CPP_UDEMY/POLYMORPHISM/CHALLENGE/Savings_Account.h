#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"
using std::string;
class Savings_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate);    
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double) override;
    virtual void print(std::ostream &os) const override;
    bool set_name(string nam);
    bool set_balance(double bal);
    // Inherits the Account::withdraw method
    virtual ~Savings_Account() = default;
    virtual string test() override;
};

#endif // _SAVINGS_ACCOUNT_H_
