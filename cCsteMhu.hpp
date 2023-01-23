#include "cAbstractMhu.hpp"

class cCsteMhu : public cAbstractMhu {
    public:
        double mSimulate(double t);
        double mComputeGradient(double t) {
            return 0.0;
        };
};