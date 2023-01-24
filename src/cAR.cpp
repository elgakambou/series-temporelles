#include "cAR.hpp"
#include "cY.hpp"
#include <iostream>

cAR::cAR(int the_p, cY * theprocessY)
{
    p = the_p;
    processY = theprocessY;
}

cAR::cAR(cAR* other)
{
	p = other->p;
	processY = new cY(other->processY);
}

void mPrint() 
{
    std::cout << "cAR  : \n";
    std::cout << "parameter p : " << p << "\n";
    std::cout << "parameter processY : " << "\n";
    processY->mPrint();
}