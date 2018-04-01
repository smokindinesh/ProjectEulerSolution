#include "stdafx.h"
#include "commonfunction.h"


CommonFunction::CommonFunction()
{
}


CommonFunction::~CommonFunction()
{
}

bool CommonFunction::checkPrime(__int64 num)
{
	if (num == 2) {
		return true;
	}
	for (__int64 i = 2; i * i <= num; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

void CommonFunction::helloTest()
{
	std::cout << "Hello World Test" << std::endl;
}
