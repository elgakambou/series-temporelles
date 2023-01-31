#pragma once
#include "cAbstractMhu.hpp"
#include "entete.h"

class cCsteMhu : public cAbstractMhu {
	private:
		double cst;
    public:
    	cCsteMhu(double theCst);
    	cCsteMhu(cCsteMhu* other);
        double mSimulate(double t, gsl_rng* rng);
        double mComputeGradient(double t);
        void mPrint();
};