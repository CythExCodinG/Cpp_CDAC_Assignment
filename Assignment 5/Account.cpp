#include "Account.h"
#include <iostream>
#include <cstring>
using namespace std;

// Default Constructor
Account::Account() {
    id = 0;
    fname = nullptr;
    lname = nullptr;
    email = nullptr;
    mobile = nullptr;
    pin = 0;
    balance = 0.0;
    minBalance = 0.0;
    interest = 0.0;
}

// Parameterized Constructor
Account::Account(int id, const char *fname, const char *lname, const char *email, const char *mobile, int pin) {
    this->id = id;
    this->pin = pin;
    this->balance = 0.0;

    this->fname = new char[strlen(fname) + 1];
    strcpy(this->fname, fname);

    this->lname = new char[strlen(lname) + 1];
    strcpy(this->lname, lname);

    this->email = new char[strlen(email) + 1];
    strcpy(this->email, email);

    this->mobile = new char[strlen(mobile) + 1];
    strcpy(this->mobile, mobile);
}

// Destructor
Account::~Account() {
    delete[] fname;
    delete[] lname;
    delete[] email;
    delete[] mobile;
}

void Account::setEmail(const char *em) {
    delete[] this->email;
    this->email = new char[strlen(em) + 1];
    strcpy(this->email, em);
}

void Account::setLname(const char *ln) {
    delete[] this->lname;
    this->lname = new char[strlen(ln) + 1];
    strcpy(this->lname, ln);
}

void Account::setFname(const char *fn) {
    delete[] this->fname;
    this->fname = new char[strlen(fn) + 1];
    strcpy(this->fname, fn);
}

void Account::setMobile(const char *mob) {
    delete[] this->mobile;
    this->mobile = new char[strlen(mob) + 1];
    strcpy(this->mobile, mob);
}

void Account::setPin(int pin) {
    this->pin = pin;
}

char* Account::getEmail() { return this->email; }
char* Account::getFname() { return this->fname; }
char* Account::getLname() { return this->lname; }
char* Account::getMobile() { return this->mobile; }

void Account::deposite(int pin, double amount, int id) {
    if (this->pin == pin && this->id == id) {
        this->balance += amount;
    }
}

void Account::withdraw(int pin, double amount, int id) {
    if (this->pin == pin && this->id == id) {
        if (this->balance >= amount) {
            this->balance -= amount;
        }
    }
}

void Account::display() {
    cout << "ID: " << this->id << endl;
    cout << "First Name: " << (fname ? fname : "") << endl;
    cout << "Last Name: " << (lname ? lname : "") << endl;
    cout << "Mobile No: " << (mobile ? mobile : "") << endl;
    cout << "Email: " << (email ? email : "") << endl;
    cout << "Balance: " << this->balance << endl;
}