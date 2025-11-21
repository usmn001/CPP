
#include "Trust_Account.h"

using std::string;

Trust_Account::Trust_Account(string name,double balance,double int_rate):Savings_Account(name,balance,int_rate),num_withdrawls{0}            
{

}


bool Trust_Account::deposit(double amount)
{
if(amount>5000){
amount+=50;    
}
return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) 
{
bool st;
double percent_balance =  max_withdraw_percent*balance;    
if(num_withdrawls<max_withdrawls  && amount<percent_balance)
{
st = Savings_Account::withdraw(amount);
num_withdrawls +=1;
}
return st;
}    


std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
     os << "[Trust_Account: " << account.name << ": " << account.balance<<","<< account.balance<<","<<account.int_rate<<"%"<< ","<< "Withdrawls : "
        <<account.num_withdrawls<<"]"<<"\n";
    return os;
}