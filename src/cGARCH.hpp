#include "cAbstractSigma.hpp"
#include "cY.hpp"
#include "entete.h"

class cGARCH : public cAbstractSigma
{
public:
    int p;
    int q;
    cY * processY;
    cGARCH(int the_q, int the_p, cY * theprocessY); // il depend de ses p dernieres valeurs
    cGARCH :: cGARCH (cGARCH *other);
    void mPrint();
};
