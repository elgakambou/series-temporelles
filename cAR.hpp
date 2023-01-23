#include "cAbstractMhu.hpp"
#include "cY.hpp"


class cAR : public cAbstractMhu
{
public:
    int p;
    cY* processY;
    cAR(int the_p, cY* theProcessY);
    void mPrint() {
            std::cout << "cAR  : \n";
            std::cout << "parameter p : " << p << "\n";
            std::cout << "parameter processY : " << "\n";
            processY->mPrint();
        }
    cAR* copy() {
        int pCopy = p;
        cY * processYCopy = processY.copy();
        cAR* copy = new cAR(pCopy, processYCopy);
        return copy;
    }
};
