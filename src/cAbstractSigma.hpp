#pragma once
#include "cAbstractProcess.hpp"
#include "entete.h"

class cAbstractSigma: public cAbstractProcess
{
public:
    gsl_vector * theta;
    
};
