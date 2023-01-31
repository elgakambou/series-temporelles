#pragma once
#include "cAbstractProcess.hpp"
#include "entete.h"

class cAbstractMhu: public cAbstractProcess
{
public:
    gsl_vector * theta;

    virtual double esperance(int t) = 0;
};
