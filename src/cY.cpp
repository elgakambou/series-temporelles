#include "cY.hpp"
#include <cmath>


cY::cY( gsl_vector * beta, gsl_vector* theta, cAbstractMhu* mhu, cAbstractSigma* sigma, cAbstractEpsilon* eps) {
    this->epsilon = eps;
    this->mhu = mhu;
    this->sigma = sigma;

    this->beta = beta;
    this->theta = theta;

    int sizeToAlloc  = max(beta->size, theta->size); // elga
    lastValues = gsl_vector_alloc(sizeToAlloc);
    gsl_vector_set_all(lastValues, -1);
    lastTimeComputed = 0.;
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
    this->epsilon = other->epsilon;
    this->sigma  = other->sigma;
    this->mhu = other->mhu;
}

// last values contiendra y(t- n + 1),...., y(t), soit n valeurs
 void cY::getLastValue(int n, double t, gsl_vector* theLastValues) {

    int sizeOfLastValue = this->lastValues->size;
    // si toutes les valeurs demandes ont ete deja calcules

    if (  lastTimeComputed - sizeOfLastValue  <= t - n &&  t <= lastTimeComputed) {
        int ind = (sizeOfLastValue - 1) - ( t - lastTimeComputed);
        double value;
        for (int i = 0; i < n ; i++) {
            value = gsl_vector_get(lastValues, ind);
            gsl_vector_set(theLastValues, i, value);
            ind++;
        }
        
    }
    // //sinon si on a deja une partie des valeurs et il faut calcule un partie
    // for (double time = lastTimeComputed; time <=t; time ++) {

    // }
    
 
        
}


// // n'ajoute que si t = lastTimeComputed + 1
// void cY::addToLastValues(double t, double val ) {
//     if ( t == lastTimeComputed + 1 ) {

//     }
// }



double cY::mSimulate(double t, gsl_rng* rng) {
    
    // cas t < 0
    if (t < 0) {
        return 0;
    }
    // check in last value 
    int sizeOfLastValue = this->lastValues->size;
    if (  lastTimeComputed - sizeOfLastValue + 1 <= t <= lastTimeComputed)
    {
        int ind = (sizeOfLastValue-1) - ( t - lastTimeComputed);
        double value = gsl_vector_get(lastValues, ind );
        return value;
    }
    // instant non vu 
    else {
        double value = mhu->mSimulate(t, rng) + epsilon->mSimulate(t, rng) * sigma->mSimulate(t, rng);   
        return value;
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
    sigma->mPrint();
    epsilon->mPrint();
}


cY::~cY() {
    //gsl_vector_free(lastValues); // elga
}