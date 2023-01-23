#include "cAbstractSigma.hpp"
#include "cY.hpp"

class cGARCH : public cAbstractSigma
{
public:
    int p;
    int q;
    cY * processY;
    cGARCH(int the_q, cY * theprocessY); // il depend de ses p dernieres valeurs
};
