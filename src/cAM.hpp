#pragma once
#include "cAbstractMhu.hpp"
#include "cU.hpp"
#include "entete.h"

class cAM : public cAbstractMhu
{
public:
    cAM(gsl_vector * phi, cU * theprocessU); // elga
    cAM::cAM(cAM* other);
    void mPrint();
    double mSimulate(double t, gsl_rng* rng);
    double mComputeGradient(double t);
    ~cAM(); // elga
    private : 
        int q;
        cU * processU;
        gsl_vector * phi;
};

