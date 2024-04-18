#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

using std::cerr;

class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char* what() const noexcept
    {
    
    return "Exception Occuured : Illegal Balance Amount Entered";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
