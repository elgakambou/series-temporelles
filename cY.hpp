#include "cAbstractProcess.hpp"
#include "cAbstractMhu.hpp"
#include "cAbstractSigma.hpp"
#include "cAbstractEpsilon.hpp"




class cY: public cAbstractProcess
{
public:
    cY(gsl_vector * theParameters);
    cY(gsl_vector * theObservations);

    cAbstractMhu* mhu;
    cAbstractSigma *sigma;
    cAbstractEpsilon* epsilon;
    gsl_vector* estimParams;

    cY(cY * other);
    double mSimulate(double t);
    double mComputeGradient(double t);
    void mPrint();
};
