#include "cAbstractSigma.hpp"
#include "cY.hpp"

class cARCH : public cAbstractSigma
{
public:
    int p;
    cY * processY;
    cARCH(int the_p, cY* theprocessY);
    void mPrint() {
            std::cout << "cARCH  : \n";
            std::cout << "parameter p : " << p << "\n";
            std::cout << "parameter processY : " << "\n";
            processY->mPrint();
        }
    cARCH* copy() {
        int pCopy = p;
        cY * processYCopy = processY.copy();
        cARCH* copy = new cARCH(pCopy, processYCopy);
        return copy;
    }
};
