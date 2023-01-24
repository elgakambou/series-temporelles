#include "cARMA.hpp"
#include "cAR.hpp"
#include "cAM.hpp"
#include <iostream>

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

cARMA::mprint()
{
	std::cout << "ARMA with: " << std::endl;
	AR->print();
	AM->print();
}



