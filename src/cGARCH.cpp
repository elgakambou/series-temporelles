
#include "cGARCH.hpp"


cGARCH:: cGARCH(int the_q, int the_p, cY * theprocessY) { // il depend de ses p dernieres valeurs 

    this->p = the_p;
    this->q = the_q;
    this->processY = theprocessY;
}

cGARCH :: cGARCH (cGARCH *other) {
    this->p = other->p;
    this->q = other->q;
    this->processY = other->processY;
}

void cGARCH:: mPrint() {
    std::cout << "cGARCH  : \n";
    std::cout << "parameters p : " << p <<  " and q :" << q << "\n";
}

