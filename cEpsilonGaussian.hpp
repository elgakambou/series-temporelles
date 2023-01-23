#include "cAbstractEpsilon.hpp"

class cEpsilonGaussian : public cAbstractEpsilon {
    public :
        cEpsilonGaussian (cEpsilonGaussian * other);
        double mDensity (double t);
        double mLogDensity (double t);
        double mSimulate(double t);
        double mComputeGradient(double t);
        void mPrint();
};