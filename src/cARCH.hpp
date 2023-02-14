#pragma once
#include "cAbstractSigma.hpp"
#include "cY.hpp"
#include "entete.h"

class cARCH : public cAbstractSigma
{
public:
    cARCH(gsl_vector * theta, cY* theprocessY); // elga
    cARCH(cARCH * other);
    double mSimulate(double t, gsl_rng* rng);
    double mComputeGradient(double t);
    void mPrint();
    ~cARCH(); // elga
    private :
        int p;
        cY * processY;
        gsl_vector* theta;

};
