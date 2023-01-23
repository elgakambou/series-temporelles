#include "cAbstractEpsilon.hpp"

class cEpsilonStudent : public cAbstractEpsilon {
    public :
        cEpsilonStudent (double the_k);
        double k;
        double mDensity (double t);
        double mLogDensity (double t);

};