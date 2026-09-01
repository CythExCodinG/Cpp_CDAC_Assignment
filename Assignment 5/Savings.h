#include "Account.h";
#ifndef Savings_H
#define Savings_H
class Saving:public Account{
    private:
        int checkBookNo;
    public:
        Saving(){
           interest=0.4; 
           minBalance=20000;
        };
        Saving(int no, char *fname, int id, char *lname, char *mobile, char *email, int pin);

        void setCheckBookNo(int no);

};
#endif