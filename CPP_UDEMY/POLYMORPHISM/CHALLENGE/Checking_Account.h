#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include <iostream>
#include <string>
#include "Account.h"
using std::string;
class Checking_Account: public Account {
  
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);    
    virtual bool withdraw(double) override;
    virtual bool deposit(double) override;
    virtual void print(std::ostream &os) const override;
    bool set_name(string nam);
    bool set_balance(double bal);
    virtual ~Checking_Account() = default;
    virtual string test() override;
};

#endif // _CHECKING_ACCOUNT_H_
