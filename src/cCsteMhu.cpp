#include "cCsteMhu.hpp"

cCsteMhu::cCsteMhu(double theCst)
{
    cst = theCst;
}

cCsteMhu::cCsteMhu(cCsteMhu* other)
{
	cst = other->cst;
}

void cCsteMhu::mPrint()
{
	std::cout << "cCsteMhu with cst = " << cst << std::endl;
}