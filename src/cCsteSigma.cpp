#include "cCsteSigma.hpp"

cCsteSigma::cCsteSigma(double theCst)
{
    cst = theCst;
}

cCsteSigma::cCsteSigma(cCsteSigma* other)
{
	cst = other->cst;
}

 double cCsteSigma::mSimulate(double t, gsl_rng* rng) {
	return cst;
 }

double cCsteSigma::mComputeGradient(double t) {
            return 0.0;
};

void cCsteSigma::mPrint()
{
	std::cout << "cCsteSigma with cst = " << cst << std::endl;
}