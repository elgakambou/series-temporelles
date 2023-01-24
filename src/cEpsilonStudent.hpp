#include "cAbstractEpsilon.hpp"

class cEpsilonStudent : public cAbstractEpsilon {
    public :
        cEpsilonStudent (double the_k);
        cEpsilonStudent (cEpsilonStudent * other); // constructeur par copie
        double k;
        double mDensity (double t);
        double mLogDensity (double t);
        double mSimulate(double t);
        double mComputeGradient(double t);
        void mPrint() {
            std::cout << "cEpsilonStudent  : \n";
            std::cout << "parameters k : " << k << "\n";
        }

};