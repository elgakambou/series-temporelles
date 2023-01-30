#pragma once
#include "cAbstractMhu.hpp"
#include "cAR.hpp"
#include "cAM.hpp"
#include "entete.h"


class cARMA : public cAbstractMhu {
    public:
        cAR* AR;
        cAM * AM;
        cARMA (int p, int q, cU * theprocessU, cY* theProcessY);
        cARMA(cARMA* other);
        void mPrint();
};