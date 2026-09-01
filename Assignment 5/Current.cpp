#include "Current.h"
#include <iostream>
using namespace std;

Current::Current() : Account() {
    interest = 0.1;
    minBalance = 1000;
    noOfTransaction = 0;
}

Current::Current(int trans, char *fname, int id, char *lname, char *mobile, char *email, int pin) 
    : Account(id, fname, lname, email, mobile, pin) {
    this->noOfTransaction = trans;
    this->interest = 0.1;
    this->minBalance = 1000;
}

void Current::display() {
    Account::display();
    cout << "No of Transactions: " << this->noOfTransaction << endl;
}

void Current::setNoOfTransaction(int tran) {
    this->noOfTransaction = tran;
}

void Current::deposite(int pin, double amount, int id) {
    if (this->pin == pin) {
        this->balance += amount;
        cout << "Deposit successful! New Balance: " << this->balance << endl;
    } else {
        cout << "Invalid PIN!" << endl;
    }
}

void Current::withdraw(int pin, double amount, int id) {
    if (this->pin == pin) {
        if (this->balance - amount >= this->minBalance) {
            this->balance -= amount;
            cout << "Withdrawal successful! Remaining Balance: " << this->balance << endl;
        } else {
            cout << "Insufficient balance. Minimum balance requirement (" << this->minBalance << ") not met." << endl;
        }
    } else {
        cout << "Invalid PIN!" << endl;
    }
}