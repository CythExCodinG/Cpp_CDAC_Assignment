#ifndef BANK_H
#define BANK_H

#include "Account.h"

class BankingService
{
private:
    Account *accounts[100];
    int accountCount;

    int findAccount(int id);    
public:
    BankingService();
    ~BankingService();
    void addAccount();
    void display();
    void displayAccount();
    void closeAccount();
    void withdrawAccount();
    void depositAccount();
    void changePin();
    void addShareToDemat(Account *a);
    int findAccount();
};

#endif