#include "cAbstractMhu.hpp"
#include "cU.hpp"

class cAM : public cAbstractMhu
{
public:
    int q;
    cU * processU;
    cAM(int the_q, cU * theprocessU);
    void mPrint() {
            std::cout << "cAM  : \n";
            std::cout << "parameter q : " << q << "\n";
            std::cout << "parameter processU : " << "\n";
            processU->mPrint();
        }
    cAM* copy() {
        int qCopy = q;
        cU * processUCopy = processU.copy();
        cAM* copy = new cAM(qCopy, processUCopy);
        return copy;
    }
};
