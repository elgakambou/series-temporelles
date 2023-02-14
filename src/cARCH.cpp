#include "cARCH.hpp"
#include "cY.hpp"
#include <iostream>

cARCH::cARCH(gsl_vector * theta, cY * theprocessY)
{
    p = theta->size;
    this->theta = theta;
    processY = theprocessY;
}

cARCH::cARCH(cARCH* other)
{
	p = other->p;
	processY = new cY(other->processY);
    theta = gsl_vector_alloc(p);
    gsl_vector_memcpy(theta, other->theta);
}

double cARCH::mSimulate(double t, gsl_rng* rng) {

    double sigmaCarre = 0.;
    double y = 0.;
     for (int i = 1; i <= p; i++) {
        y = processY->mSimulate( t- i, rng);
        sigmaCarre += gsl_vector_get(theta, i - 1) * y * y; // elga
    }
    return sqrt(sigmaCarre);
}

double cARCH::mComputeGradient(double t) {
    // a complter 
    return 0;
}

void cARCH::mPrint() 
{
    std::cout << "cARCH  : \n";
    std::cout << "parameter p : " << p << "\n";
    std::cout << "parameter processY : " << "\n";
    processY->mPrint();
}

cARCH::~cARCH() {
    gsl_vector_free(theta);
}; // elga
