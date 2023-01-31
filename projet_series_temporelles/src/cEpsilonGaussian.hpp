#pragma once
#include "cAbstractEpsilon.hpp"
#include "entete.h"

class cEpsilonGaussian : public cAbstractEpsilon {
    public :
        cEpsilonGaussian ();
        cEpsilonGaussian (cEpsilonGaussian * other);
        double mDensity (double t);
        double mLogDensity (double t);
        double mSimulate(double t, gsl_rng* rng);
        double mComputeGradient(double t);
        void mPrint();
};