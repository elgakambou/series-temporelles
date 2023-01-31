#include "cCsteMhu.hpp"

cCsteMhu::cCsteMhu(double theCst)
{
    cst = theCst;
}

cCsteMhu::cCsteMhu(cCsteMhu* other)
{
	cst = other->cst;
}

double cCsteMhu :: mSimulate(double t, gsl_rng* rng) {
	return cst;
}
double cCsteMhu :: mComputeGradient(double t) {
            return 0.0;
        };
void cCsteMhu::mPrint()
{
	std::cout << "cCsteMhu with cst = " << cst << std::endl;
}