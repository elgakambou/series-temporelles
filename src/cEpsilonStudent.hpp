#pragma once
#include "cAbstractEpsilon.hpp"
#include "entete.h"

class cEpsilonStudent : public cAbstractEpsilon {
    public :
        cEpsilonStudent (double the_k);
        cEpsilonStudent (cEpsilonStudent * other); // constructeur par copie
        double k;
        double mDensity (double t);
        double mLogDensity (double t);
        double mSimulate(double t, gsl_rng* rng);
        double mComputeGradient(double t);
        void mPrint() {
            std::cout << "cEpsilonStudent  : \n";
            std::cout << "parameters k : " << k << "\n";
        }

};