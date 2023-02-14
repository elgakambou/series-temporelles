#include "cEpsilonStudent.hpp"



cEpsilonStudent::cEpsilonStudent(double the_k) { // elga
    k = the_k;
}
     
cEpsilonStudent::cEpsilonStudent (cEpsilonStudent *other) {
    this->k = other->k;
}
    
void cEpsilonStudent::mPrint() {
    std::cout << "cEpsilonStudent  : \n";
    std::cout << "parameters k : " << k << "\n";
    }


double cEpsilonStudent::mDensity (double t) {
    return gsl_ran_tdist_pdf(t, k); // elga
}
double cEpsilonStudent::mLogDensity (double t) { // elga
    return log(mDensity(t));
}

double cEpsilonStudent::mSimulate(double t, gsl_rng* rng) {
        return gsl_ran_tdist(rng, k); // elga
}
double cEpsilonStudent::mComputeGradient(double t) {
    // a completer
    return 0;
}