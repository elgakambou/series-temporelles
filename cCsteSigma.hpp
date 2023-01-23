#include "cAbstractSigma.hpp"

class cCsteSigma : public cAbstractSigma {
    public:
        double mSimulate(double t);
        double mComputeGradient(double t) {
            return 0.0;
        };
};