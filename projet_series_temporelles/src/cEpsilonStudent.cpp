#include "cEpsilonStudent.hpp"

        
cEpsilonStudent :: cEpsilonStudent (cEpsilonStudent *other) {
    this->k = other->k;
}
    
void cEpsilonStudent :: mPrint() {
    std::cout << "cEpsilonStudent  : \n";
    std::cout << "parameters k : " << k << "\n";
    }


// double mDensity (double t);
// double mLogDensity (double t);
// double mSimulate(double t);
// double mComputeGradient(double t);