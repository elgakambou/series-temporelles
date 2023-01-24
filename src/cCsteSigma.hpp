#include "cAbstractSigma.hpp"
#include "entete.h"

class cCsteSigma : public cAbstractSigma {
	private:
		double cst;
    public:
    	cCsteSigma(double theCst);
    	cCsteSigma(cCsteSigma* other);
        double mSimulate(double t);
        double mComputeGradient(double t) {
            return 0.0;
        };
        void mPrint();
};