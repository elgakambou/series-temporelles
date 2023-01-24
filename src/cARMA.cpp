#include "cARMA.hpp"
#include "cAR.hpp"
#include "cAM.hpp"

cARMA::cARMA(int p, int q, cU * theprocessU, cY* theProcessY)
{
    AR = new cAR(p, theProcessY);
    AM = new cAM(q, theprocessU);
}

cARMA::cARMA(cARMA* other)
{
	AR = new cAR(other->AR);
	AM = new cAM(other->AM);
}

void cARMA::mPrint()
{
	std::cout << "ARMA with: " << std::endl;
	AR->mPrint();
	AM->mPrint();
}



