#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H__
#define __INSUFFICIENT_FUNDS_EXCEPTION_H__

using std::cerr;

class InsufficientFundsException : public std::exception
{
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;
    virtual const char* what() const noexcept
    {
    return "Exception Occuured : Insufficient Funds";
    }
};

#endif // __INSUFFICIENT_FUNDS_EXCEPTION_H__