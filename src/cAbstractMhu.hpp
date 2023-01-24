#include "cAbstractProcess.hpp"
#include "gsl-dir/gsl-dir/gsl-include/gsl.*"

class cAbstractMhu: public cAbstractProcess
{
public:
    gsl_vector * theta; 

};
