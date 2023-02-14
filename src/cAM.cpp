#include "cAM.hpp"
#include "cU.hpp"
#include <iostream>


cAM::cAM(gsl_vector * phi, cU * theprocessU)
{
    q = phi->size;
    this->phi = phi;
    processU = theprocessU;
}

cAM::cAM(cAM* other)
{
	q = other->q;
	processU = new cU(other->processU);
    // elga
    phi = gsl_vector_alloc(q);
    gsl_vector_memcpy(phi, other->phi);
}

double cAM::mSimulate(double t, gsl_rng* rng)
{ // ELGA

    double s = 0.0;
    for (int i = 1; i <= q; i++) {
        s += gsl_vector_get(phi, i - 1) * processU->mSimulate( t- i, rng); // elga
    }
    return s;
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
// elga
cAM::~cAM() {
    gsl_vector_free(phi);
}; 
