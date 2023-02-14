#include "cAR.hpp"
#include "cY.hpp"
#include <iostream>

cAR::cAR(gsl_vector * phi, cY * theprocessY) // elga
{
    p = phi->size;
    this->phi = phi;
    processY = theprocessY;
}

cAR::cAR(cAR* other)
{
	p = other->p;
    processY = new cY(other->processY);
    // elga
    phi = gsl_vector_alloc(p);
    gsl_vector_memcpy(phi, other->phi);
}

double cAR::mSimulate(double t, gsl_rng* rng)
{// ELGA

    double s = 0.0;
    for (int i = 1; i <= p; i++) {
        s += gsl_vector_get(phi, i - 1) * processY->mSimulate( t- i, rng); // elga
    }
    return s;
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

cAR::~cAR() {
    gsl_vector_free(phi);
}; // elga
