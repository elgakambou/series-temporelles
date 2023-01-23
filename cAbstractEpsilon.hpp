#include "cAbstractProcess.hpp"

class cAbstractEpsilon : public cAbstractProcess
{
public:
    virtual double mDensity (double t) = 0;
    virtual double mLogDensity (double t) = 0;

};
