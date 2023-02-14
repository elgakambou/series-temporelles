#pragma once
#include "cAbstractMhu.hpp"
#include "cY.hpp"
#include "entete.h"


class cAR : public cAbstractMhu
{
public:
    cAR(gsl_vector * phi, cY* theProcessY);
    cAR(cAR* other);

    double mSimulate(double t, gsl_rng* rng);
    double mComputeGradient(double t);
    void mPrint();
    ~cAR(); // elga

    private :
        int p;
        cY* processY;
        gsl_vector* phi;


};
