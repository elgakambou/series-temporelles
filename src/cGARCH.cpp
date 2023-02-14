
#include "cGARCH.hpp"


cGARCH::cGARCH(gsl_vector * alpha, gsl_vector * beta, cY* theProcessY, cU * theprocessU) {

    this->processU = theprocessU;
    this->processY = theProcessY;
    this->alpha = alpha;
    this->beta = beta;
    p = alpha->size;
    q = beta->size;

}

cGARCH :: cGARCH (cGARCH *other) {
    this->p = other->p;
    this->q = other->q;
    this->processY = other->processY;
}


 double cGARCH::mSimulate(double t, gsl_rng* rng) { // elga
	double sigmaCarre = 0.;
    double y = 0.;
    double sigmaU = 0.;
    for (int i = 1; i <= p; i++) {
        y = processY->mSimulate( t- i, rng);
        sigmaCarre += gsl_vector_get(alpha, i - 1) * y * y; // elga
    }

    for (int i = 1; i <= q; i++) {
        sigmaU = processU->mSimulate( t- i, rng);
        sigmaCarre += gsl_vector_get(beta, i - 1) * sigmaU * sigmaU; // elga
    }

    return sqrt(sigmaCarre);
 }


double cGARCH::mComputeGradient(double t) {
	// a completer
	return 0;
}

void cGARCH:: mPrint() {
    std::cout << "cGARCH  : \n";
    std::cout << "parameters p : " << p <<  " and q :" << q << "\n";
}


cGARCH::~cGARCH () {
    gsl_vector_free(alpha);
    gsl_vector_free(beta);
}
