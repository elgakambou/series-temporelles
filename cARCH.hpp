#include "cAbstractSigma.hpp"
#include "cY.hpp"

class cARCH : public cAbstractSigma
{
public:
    int p;
    cY * processy;
    cARCH(int the_p, cY* theprocessY);
};
