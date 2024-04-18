#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;
using std::make_unique;
using std::unique_ptr;
using std::cout;
using std::cerr;
int main() {
    // test your code here
 unique_ptr<Account> ptr1,ptr2; 

try 
{ 
ptr2 = make_unique<Savings_Account>("Mehwish",10000);
ptr2->withdraw(100);
ptr1 = make_unique<Savings_Account>("USMAN",-100); 
}

catch(const IllegalBalanceException &ref)
{
cerr<<ref.what();
}


catch(const InsufficientFundsException &ref)
{
cerr<<ref.what();
}


    cout<<"\n";
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

