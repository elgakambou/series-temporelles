#pragma once
#include "cAbstractSigma.hpp"
#include "entete.h"

class cCsteSigma : public cAbstractSigma {
	private:
		double cst;
    public:
    	cCsteSigma(double theCst);
    	cCsteSigma(cCsteSigma* other);
        double mSimulate(double t, gsl_rng* rng);
        double mComputeGradient(double t);
        void mPrint();
};