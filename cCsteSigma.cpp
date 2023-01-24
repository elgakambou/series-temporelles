#include "cCsteSigma.hpp"
#include <iostream>

cCsteSigma::cCsteSigma(double theCst)
{
    cst = theCst;
}

cCsteSigma::cCsteSigma(cCsteSigma* other)
{
	cst = other->cst;
}

cCsteSigma::mprint()
{
	std::cout << "cCsteSigma with cst = " << cst << std::endl;
}