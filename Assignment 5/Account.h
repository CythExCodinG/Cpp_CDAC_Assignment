#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    char *fname;
    int id;
    char *lname;
    char *email;
    char *mobile;
protected:    
    int pin;
    int count;
    double balance;    // Changed to double for accurate money handling
    double minBalance;
    double interest;   // Changed from int to double
public:
    Account();
    Account(int id, const char *fname, const char *lname, const char *email, const char *mobile, int pin);
    virtual ~Account(); // Added virtual destructor for safe inheritance cleanup

    virtual void deposite(int pin, double amount, int id);
    virtual void withdraw(int pin, double amount, int id);

    void setFname(const char *nm);
    void setLname(const char *nm);
    void setPin(int pin);
    void setEmail(const char *em);
    void setMobile(const char *mob);

    char* getFname();
    char* getLname();
    char* getEmail();
    char* getMobile();
    int getId() const { return id; }

    virtual void display();
};

#endif