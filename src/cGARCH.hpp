#pragma once
#include "cAbstractSigma.hpp"
#include "cY.hpp"
#include "cU.hpp"

#include "entete.h"

class cGARCH : public cAbstractSigma
{
public:
    cGARCH(gsl_vector * alpha, gsl_vector * beta, cY* theProcessY, cU * theprocessU);
    cGARCH :: cGARCH (cGARCH *other);

    double mSimulate(double t, gsl_rng* rng); // elga
    double mComputeGradient(double t); 
    void mPrint();
    ~cGARCH ();
    private : 
        int p;
        int q;
        cY * processY;
        cU * processU;
        gsl_vector* alpha;
        gsl_vector* beta;
};
