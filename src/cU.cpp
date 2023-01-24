#include "cU.hpp"
#include <iostream>

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

cU::mprint()
{
	std::cout << "cU with: " << cst << std::endl;
	eps->print();
	sigma->print();
}