#include "cCsteMhu.hpp"
#include <iostream>

cCsteMhu::cCsteMhu(double theCst)
{
    cst = theCst;
}

cCsteMhu::cCsteMhu(cCsteMhu* other)
{
	cst = other->cst;
}

cCsteMhu::mprint()
{
	std::cout << "cCsteMhu with cst = " << cst << std::endl;
}