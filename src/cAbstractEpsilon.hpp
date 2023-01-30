#pragma once
#include "cAbstractProcess.hpp"
#include "entete.h"

class cAbstractEpsilon : public cAbstractProcess
{
public:
    virtual double mDensity (double t) = 0;
    virtual double mLogDensity (double t) = 0;

};
