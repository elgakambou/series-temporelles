#include "cAbstractMhu.hpp"
#include "entete.h"

class cCsteMhu : public cAbstractMhu {
	private:
		double cst;
    public:
    	cCsteMhu(double theCst);
    	cCsteMhu(cCsteMhu* other);
        double mSimulate(double t);
        double mComputeGradient(double t) {
            return 0.0;
        };
        void mPrint();
};