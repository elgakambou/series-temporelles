#include "cAM.hpp"
#include "cU.hpp"
#include <iostream>

cAM::cAM(int the_q, cU * theprocessU)
{
    q = the_q;
    processU = theprocessU;
}

cAM::cAM(cAM* other)
{
	q = other->q;
	processU = new cU(other->processU);
}

double cAM::mSimulate(double t, gsl_rng* rng)
{// a completer
	return 0;
}

double cAM::mComputeGradient(double t)
{// a completer
		return 0;
}

void cAM::mPrint() 
{
    std::cout << "cAM  : \n";
    std::cout << "parameter q : " << q << "\n";
    std::cout << "parameter processU : " << "\n";
    processU->mPrint();
}