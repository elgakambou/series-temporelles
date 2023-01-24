#include "cAbstractProcess.hpp"
#include "cAbstractEpsilon.hpp"
#include "cAbstractSigma.hpp"
#include "entete.h"


class cU : public cAbstractProcess {
    public :
        cAbstractEpsilon* eps ;
        cAbstractSigma* sigma;
        cU(cAbstractEpsilon* theEps,  cAbstractSigma* theSigma);
        cU(cU* other);

        double mSimulate(double t);
        double mComputeGradient(double t);
        void mPrint();
};