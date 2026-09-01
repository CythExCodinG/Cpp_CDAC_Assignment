#include "Account.h"
#include "Share.h"
#ifndef Demat_H
#define Demat_H
class Demat:public Account{
    public:
        Share s[100];
        int count=0; 

        Demat();
        Demat(int id, const char *fname, const char *lname, const char *email, const char *mobile, int pin); 
        
        void addShare(Share &s);
};

#endif