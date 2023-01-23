#include "cAbstractMhu.hpp"
#include "cY.hpp"


class cAR : public cAbstractMhu
{
public:
    int p;
    cY* processY;
    cAR(int the_p, cY* theProcessY);
};
