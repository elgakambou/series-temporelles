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
{
	return eps->mSimulate(t, rng) * sigma->mSimulate(t, rng); // elga
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