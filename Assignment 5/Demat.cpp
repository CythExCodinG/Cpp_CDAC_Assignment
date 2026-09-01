#include "Demat.h"
#include "Share.h"


Demat::Demat(int id, const char *fname, const char *lname, const char *email, const char *mobile, int pin )
  : Account(id, fname, lname, email, mobile, pin) {

    }

void Demat::addShare(Share &s){
          this->s[count] =s;
          count++;
}

