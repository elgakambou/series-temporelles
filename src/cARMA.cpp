#include "cARMA.hpp"
#include "cAR.hpp"
#include "cAM.hpp"

cARMA::cARMA(gsl_vector * phiAR, gsl_vector * phiAM, cY* theProcessY, cU * theprocessU) // elga
{
    AR = new cAR(phiAR, theProcessY);
    AM = new cAM(phiAM, theprocessU);
}

cARMA::cARMA(cARMA* other)
{
	AR = new cAR(other->AR);
	AM = new cAM(other->AM);
}



 double cARMA::mSimulate(double t, gsl_rng* rng) { // elga
	return AR->mSimulate(t, rng) + AM->mSimulate(t, rng);
 }


double cARMA::mComputeGradient(double t) {
	// a completer
	return 0;
}


void cARMA::mPrint()
{
	std::cout << "ARMA with: " << std::endl;
	AR->mPrint();
	AM->mPrint();
}

cARMA::~cARMA () {
	delete(AR);
	delete(AM);
}



