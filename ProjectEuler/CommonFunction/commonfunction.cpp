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

bool CommonFunction::checkPalindrome(int num)
{
	std::vector<int> v;
	int a = num;
	int q;
	int r;
	while( a > 9) {
		q = a / 10;
		r = a % 10;
		v.push_back(r);
		a = q;
		if (q < 10) {
			v.push_back(q);
		}
	}
	int c = v.size();
	int f = 1;
	if (c % 2 == 0) {
		for (int i = 0; i < c / 2; i++) {
			if (v.at(i) != v.at(c - i -1 )) {
				f = 0;
				break;
			}
		}
		if (f == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

void CommonFunction::helloTest()
{
	std::cout << "Hello World Test" << std::endl;
	std::vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	std::cout << "Count" <<v.capacity() <<std::endl;
}
