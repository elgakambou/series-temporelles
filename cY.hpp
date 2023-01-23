#include "cAbstractProcess.hpp"
#include "cAbstractMhu.hpp"
#include "cAbstractSigma.hpp"
#include "cAbstractEpsilon.hpp"




class cY: public cAbstractProcess
{
public:
    cY(gsl_vector * theParameters);
    cY(gsl_vector * theObservations);

    cAbstractMhu theMhu;
    cAbstractSigma theSigma;
    cAbstractEpsilon theEpsilon;
    gsl_vector * estimParams;


};
