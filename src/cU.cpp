#include "cU.hpp"

cU::cU(cAbstractEpsilon* theEps,  cAbstractSigma* theSigma)
{
    eps = theEps;
    sigma = theSigma;
}

cU::cU(cU* other)
{
	eps = other->eps;
	sigma = other->sigma;
}

double cU::mSimulate(double t, gsl_rng* rng)
{// a completer
	return 0;
}

double cU::mComputeGradient(double t)
{// a completer
		return 0;
}
void cU::mPrint()
{
	std::cout << "cU with: " << std::endl;
	eps->mPrint();
	sigma->mPrint();
}