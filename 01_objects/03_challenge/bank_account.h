#include <iostream>
#include <string>

class BankAccount {
    public:
        BankAccount(const double& init_balance);
        void deposit(const double& deposit);
        void withdraw(const double& withdraw);
        double get_balance();
    private:
        double balance;
};