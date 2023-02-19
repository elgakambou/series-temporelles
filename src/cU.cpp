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

// 
double cU::mSimulate(double t, gsl_rng* rng) {
    
    // cas t < 0
    if (t < 0) {
        return 0.;
    }   
    else if ( t <= lastTimeComputed) {
        return lastValues[t];
    }
    else {
        double value;
        for (int time = lastTimeComputed + 1; time <=t; time++) {
        value = eps->mSimulate(time, rng) * sigma->mSimulate(time, rng); 
        lastTimeComputed = time;
        lastValues[time] = value;
        }
        return value;
    }
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