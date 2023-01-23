#include "cAbstractEpsilon.hpp"

class cEpsilonGaussian : public cAbstractEpsilon {
    public :
        double mDensity (double t);
        double mLogDensity (double t);

};