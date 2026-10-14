#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include <string>

class BankAccount {
    public:
        double get_balance() const;
        bool deposit(const long double& amt);
        bool withdraw(const long double& amt);
    private:
        std::string name_;
        long double balance_;
        const unsigned long long account_number_;
}

#endif  // BANKACCOUNT_H