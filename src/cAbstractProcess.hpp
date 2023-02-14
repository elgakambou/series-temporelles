#pragma once

#include <iostream>
#include "entete.h"



// question : l'egalite fait elle la copie ?
// les constantes dans GARCH

class cAbstractProcess
{

public:
    virtual double mSimulate(double t,  gsl_rng* rng) = 0;
    virtual double mComputeGradient(double t) = 0;
    // elga
    // gsl_vector* lastValues = nullptr; // elga ; vaut null par defaut
    // double lastTimeComputed;
    void getLastValue(int n, gsl_vector* lastValues) {
        std::cout << " Not implemented yet !!" <<  std ::endl;
        exit(0);
    }
    virtual void mPrint() = 0;
};


