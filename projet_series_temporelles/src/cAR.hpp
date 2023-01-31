#pragma once
#include "cAbstractMhu.hpp"
#include "cY.hpp"
#include "entete.h"


class cAR : public cAbstractMhu
{
public:
    int p;
    cY* processY;
    cAR(int the_p, cY* theProcessY);
    cAR(cAR* other);

    double mSimulate(double t, gsl_rng* rng);
    double mComputeGradient(double t);
    void mPrint();
};
