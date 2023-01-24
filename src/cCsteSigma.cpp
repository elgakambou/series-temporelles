#include "cCsteSigma.hpp"

cCsteSigma::cCsteSigma(double theCst)
{
    cst = theCst;
}

cCsteSigma::cCsteSigma(cCsteSigma* other)
{
	cst = other->cst;
}

void cCsteSigma::mPrint()
{
	std::cout << "cCsteSigma with cst = " << cst << std::endl;
}