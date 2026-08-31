#include "Account.h"
#include "Share.h"
#ifndef Demat_H
#define Demat_H
class Demat:public Account{
    public:
        Share s[100];
        int count=0;
        void addShare(Share &s);
};

#endif