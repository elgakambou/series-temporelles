#include "cY.hpp"


cY::cY(cAbstractMhu* mhu, cAbstractSigma* sigma, cAbstractEpsilon* eps) {
    this->epsilon = eps;
    this->mhu = mhu;
    this->sigma = sigma;
}



cY::cY(gsl_vector * beta, gsl_vector* theta){
    // a completer
}
cY:: cY(gsl_vector * theObservations) {
    // a completer
}

cY:: cY(cY * other) {
    this->epsilon = other->epsilon;
    this->sigma  = other->sigma;
    this->mhu = other->mhu;
}

void cY :: mPrint() {
    std::cout << "cY  : \n";
    std::cout << "parameters \n";
    mhu->mPrint();
    sigma->mPrint();
    epsilon->mPrint();
}