#include "cAbstractProcess.hpp"
#include "cAbstractEpsilon.hpp"
#include "cAbstractSigma.hpp"


class cU : public cAbstractProcess {
    public :
        cAbstractEpsilon* eps ;
        cAbstractSigma* sigma;
        cU(cAbstractEpsilon* theEps,  cAbstractSigma* theSigma);
        cU(cU* other);
        print();
};