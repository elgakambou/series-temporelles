#include "cAbstractProcess.hpp"

class cAbstractEpsilon : public cAbstractProcess
{
public:
    virtual double density (double t) = 0;
};
