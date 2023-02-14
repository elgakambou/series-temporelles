#include "cY.hpp"
#include <cmath>


cY::cY(cAbstractMhu* mhu, cAbstractSigma* sigma, cAbstractEpsilon* eps) {
    this->epsilon = eps;
    this->mhu = mhu;
    this->sigma = sigma;

    // int sizeToAlloc  = max(mhu->phi->size, sigma->theta->size); // elga
    // lastValues = gsl_vector_alloc(sizeToAlloc);
    // lastTimeComputed = 0;
}

cY:: cY(gsl_vector * theObservations) {
    // a completer
}

cY:: cY(cY * other) {
    this->epsilon = other->epsilon;
    this->sigma  = other->sigma;
    this->mhu = other->mhu;
}


// cY::cY(gsl_vector * beta, gsl_vector* theta){
//     // a completer
// }


double cY::mSimulate(double t, gsl_rng* rng) {
    
    // cas t < 0
    if (t < 0) {
        return 0;
    }
    return mhu->mSimulate(t, rng) + epsilon->mSimulate(t, rng) * sigma->mSimulate(t, rng);   
}


double cY::mComputeGradient(double t)
{// a completer
		return 0;
}

void cY :: mPrint() {
    std::cout << "cY  : \n";
    std::cout << "parameters \n";
    mhu->mPrint();
    sigma->mPrint();
    epsilon->mPrint();
}


cY::~cY() {
    //gsl_vector_free(lastValues); // elga
}