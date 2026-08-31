#ifndef CURRENT_H
#define CURRENT_H

#include "Account.h"

class Current : public Account {
private:
    int noOfTransaction;

public:
    Current();
    Current(int trans, char *fname, int id, char *lname, char *mobile, char *email, int pin);
    
    void setNoOfTransaction(int nooftran);
    void display() override;
    void deposite(int pin, double amount, int id) override;
    void withdraw(int pin, double amount, int id) override;
};

#endif