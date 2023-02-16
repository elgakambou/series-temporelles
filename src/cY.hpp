#pragma once
#include "cAbstractProcess.hpp"
#include "cAbstractMhu.hpp"
#include "cAbstractSigma.hpp"
#include "cAbstractEpsilon.hpp"
#include "entete.h"




class cY: public cAbstractProcess
{
public:
    //cY(gsl_vector * beta, gsl_vector* theta);
    cY(gsl_vector * beta, gsl_vector* theta,cAbstractMhu* mhu, cAbstractSigma* sigma, cAbstractEpsilon* eps); // elga
    cY(gsl_vector * theObservations);
    cAbstractMhu* mhu;
    cAbstractSigma *sigma;
    cAbstractEpsilon* epsilon;

    gsl_vector * beta;
    gsl_vector* theta;
    gsl_vector* estimParams;


    double initialValue;
    cY(cY * other);
// last values contiendra y(t- n + 1),...., y(t), soit n valeurs
    void getLastValue(int n, double t, gsl_vector* theLastValues);
    void addToLastValues(double t, double val );
    double mSimulate(double t, gsl_rng* rng);
    double mComputeGradient(double t);
    void mPrint();
    ~cY();
};
