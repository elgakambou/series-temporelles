#pragma once
#include "cAbstractProcess.hpp"
#include "cAbstractMhu.hpp"
 #include "cU.hpp"
#include "entete.h"




class cY: public cAbstractProcess
{
public:
    //cY(gsl_vector * beta, gsl_vector* theta);
    cY(gsl_vector * beta, gsl_vector* theta,cAbstractMhu* mhu, cU *theVariance); // elga
    cY(gsl_vector * theObservations);
    cAbstractMhu* mhu;
    cU *varianceCond;

    gsl_vector * beta;
    gsl_vector* theta;
    gsl_vector* estimParams;


    cY(cY * other);
// last values contiendra y(t- n + 1),...., y(t), soit n valeurs
    double mSimulate(double t, gsl_rng* rng);
    double logLikelihood(gsl_vector* observations, gsl_rng* rng);
    double mComputeGradient(double t);
    void mPrint();
    ~cY();
};
