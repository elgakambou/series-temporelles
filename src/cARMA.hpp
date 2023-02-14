#pragma once
#include "cAbstractMhu.hpp"
#include "cAR.hpp"
#include "cAM.hpp"
#include "entete.h"


class cARMA : public cAbstractMhu {
    public:
        cARMA(gsl_vector * phiAR, gsl_vector * phiAM, cY* theProcessY, cU * theprocessU);
        cARMA(cARMA* other);
        double mSimulate(double t, gsl_rng* rng);
        double mComputeGradient(double t);
        void mPrint();
        ~cARMA (); // elga
        private:
            cAR* AR;
            cAM * AM;
};