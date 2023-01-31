#include "cEpsilonGaussian.hpp"

cEpsilonGaussian :: cEpsilonGaussian () {
}

cEpsilonGaussian :: cEpsilonGaussian (cEpsilonGaussian* other) {
}
    
void cEpsilonGaussian :: mPrint() {
    std::cout << "cEpsilonGaussian  : \n";
    std::cout << "NO PARAMETERS \n";
    }


double mDensity (double t) {
    return gsl_ran_gaussian_pdf(t, 1);
}

double mLogDensity (double t) {
    return log (mDensity(t));
}
double mSimulate(double t, gsl_rng* rng) {
    return gsl_ran_gaussian(rng, 1);
}
// double mComputeGradient(double t);