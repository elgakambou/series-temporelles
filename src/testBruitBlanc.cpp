
#include "entete.h"
#include "cCsteMhu.hpp"
#include "cCsteSigma.hpp"
#include "cEpsilonGaussian.hpp"
#include "cY.hpp"

int main () {
    const gsl_rng_type* T = gsl_rng_default;
    gsl_rng* rng = gsl_rng_alloc(T);
    gsl_rng_set(rng, 0.0);
    
    cCsteMhu* mhu = new cCsteMhu(0.);
    cCsteSigma* sigma = new cCsteSigma(1.);
    cEpsilonGaussian* residu = new cEpsilonGaussian();
    cY *myprocess = new cY(mhu, sigma, residu);

    // simulation
    myprocess->mSimulate(0.5, rng);
}