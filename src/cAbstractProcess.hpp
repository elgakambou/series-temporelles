#pragma once

#include <iostream>
#include "entete.h"
#include <vector>


// question : l'egalite fait elle la copie ?
// les constantes dans GARCH

class cAbstractProcess
{

public:
    virtual double mSimulate(double t,  gsl_rng* rng) = 0;
    virtual double mComputeGradient(double t) = 0;
    // elga
    std::vector<double> lastValues; // elga 
    double lastTimeComputed = -1;
    virtual void getLastValue(double t, gsl_vector* theLastValues) {
        std::cout << " Not implemented yet !!" <<  std ::endl;
        exit(0);
    }
    virtual void mPrint() = 0;
};


