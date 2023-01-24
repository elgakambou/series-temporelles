#include "cARCH.hpp"
#include "cY.hpp"
#include <iostream>

cARCH::cARCH(int the_p, cY * theprocessY)
{
    p = the_p;
    processY = theprocessY;
}

cARCH::cARCH(cARCH* other)
{
	p = other->p;
	processY = new cY(other->processY);
}

void cARCH::mPrint() 
{
    std::cout << "cARCH  : \n";
    std::cout << "parameter p : " << p << "\n";
    std::cout << "parameter processY : " << "\n";
    processY->mPrint();
}