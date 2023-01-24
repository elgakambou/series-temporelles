#include "cAbstractMhu.hpp"
#include "cU.hpp"
#include "entete.h"

class cAM : public cAbstractMhu
{
public:
    int q;
    cU * processU;
    cAM(int the_q, cU * theprocessU);
    cAM::cAM(cAM* other);
    void mPrint();
    double mSimulate(double t);
    double mComputeGradient(double t);
};
