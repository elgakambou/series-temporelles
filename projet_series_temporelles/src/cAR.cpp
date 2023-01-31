#include "cAR.hpp"
#include "cY.hpp"
#include <iostream>

cAR::cAR(int the_p, cY * theprocessY)
{
    p = the_p;
    processY = theprocessY;
}

cAR::cAR(cAR* other)
{
	p = other->p;
	processY = new cY(other->processY);
}

double cAR::mSimulate(double t, gsl_rng* rng)
{// a completer
	return 0;
}

double cAR::mComputeGradient(double t)
{// a completer
		return 0;
}

void cAR::mPrint() 
{
    std::cout << "cAR  : \n";
    std::cout << "parameter p : " << p << "\n";
    std::cout << "parameter processY : " << "\n";
    processY->mPrint();
}