#include "bank_account.h"

BankAccount::BankAccount(const double& init_balance) : balance(init_balance){};


void BankAccount::deposit(const double& deposit){
    double new_balance =  this->balance - deposit;
    if(deposit > 0){
        this->balance =  this->balance + deposit;
    }
    std::cout << this->balance << std::endl;
}

void BankAccount::withdraw(const double& withdraw){
    double new_balance =  this->balance - withdraw;
    if(new_balance < 0 ){
        std::cerr<< "Insufficient balance!" << std::endl;
    }
    else if(withdraw > 0){
        this->balance = new_balance;
        std::cout << this->balance << std::endl;
    }
}

double BankAccount::get_balance(){
    std::cout << this->balance << std::endl;
    return this->balance;
}