#include <iostream>
#include "entete.h"

class cAbstractProcess
{

public:
    virtual double mSimulate(double t) = 0;
    virtual double mComputeGradient(double t) = 0;
    gsl_vector* lastValues; // a voir s'il faut fixer sa taille a la base
    void getLastValue(int n, gsl_vector* lastValues) {
        std::cout << " Not implemented yet !!" <<  std ::endl;
        exit(0);
    }
    virtual void mPrint() = 0;
};


