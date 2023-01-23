
class cAbstractProcess
{

public:
    virtual double mSimulate(double t) = 0;
    virtual double mComputeGradient(double t) = 0;
};


