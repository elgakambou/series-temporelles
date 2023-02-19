#include "cY.hpp"
#include <cmath>


cY::cY( gsl_vector * beta, gsl_vector* theta, cAbstractMhu* mhu, cU *theVariance) {
    this->mhu = mhu;
    this->varianceCond = theVariance;
    this->beta = beta;
    this->theta = theta;
}


// cY::cY(gsl_vector * beta, gsl_vector* theta){
//      this->beta = beta;
//     this->theta = theta;
    
//     int sizeToAlloc  = max(beta->size, theta->size); // elga
//     lastValues = gsl_vector_alloc(sizeToAlloc);
//     lastTimeComputed = 0.;

//     // a completer
//     //  this->epsilon = eps;
//     // this->mhu = mhu;
//     // this->sigma = sigma;
// }


cY:: cY(gsl_vector * theObservations) {
    // a completer
}

cY:: cY(cY * other) {
    this->varianceCond = other->varianceCond;
    this->mhu = other->mhu;
}

// 
double cY::mSimulate(double t, gsl_rng* rng) {
    
    // cas t < 0
    if (t < 0) {
        return 0.;
    }   
    else if ( t <= lastTimeComputed) {
        return lastValues[t];
    }
    else {
        double value;
        for (int time = lastTimeComputed + 1; time <=t; time++) {
        value = mhu->mSimulate(time, rng) + varianceCond->mSimulate(time, rng); 
        lastTimeComputed = time;
        lastValues[time] = value;
        }
        return value;
    }
}

double cY::logLikelihood(gsl_vector* observations, gsl_rng* rng) {
    int n = observations->size;
    double y;
    double sigma;
    double m;
    double I;
    double output;
    for (int i = 0; i < n; i++) {
        y = gsl_vector_get(observations, i);
        m = mhu->mSimulate(i, rng);
        sigma = varianceCond->sigma->mSimulate(i, rng);
        //I = -log ( sigma )  +  log (  )
    }
}


double cY::mComputeGradient(double t)
{// a completer
		return 0;
}

void cY :: mPrint() {
    std::cout << "cY  : \n";
    std::cout << "parameters \n";
    mhu->mPrint();
    varianceCond->mPrint();
}


cY::~cY() {
    //gsl_vector_free(lastValues); // elga
}