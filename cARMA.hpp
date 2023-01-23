#include "cAbstractMhu.hpp"
#include "cAR.hpp"
#include "cAM.hpp"


class cARMA : public cAbstractMhu {
    public:
        cAR* AR;
        cAM * AM;
        cARMA (int p, int q, cU * theprocessU, cY* theProcessY);
};