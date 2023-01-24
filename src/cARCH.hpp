#include "cAbstractSigma.hpp"
#include "cY.hpp"
#include "entete.h"

class cARCH : public cAbstractSigma
{
public:
    int p;
    cY * processY;
    cARCH(int the_p, cY* theprocessY);
    cARCH(cARCH * other);
    void mPrint();
};
