#include "Savings.h"


Saving::Saving(int no, char *fname, int id, char *lname, char *mobile, char *email, int pin) : 
    Account(id, fname, lname, email, mobile, pin){
        this->checkBookNo = no;
    }


void Saving::setCheckBookNo(int n){
    this->checkBookNo=n;
}


