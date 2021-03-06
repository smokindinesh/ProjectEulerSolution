// Problem3.cpp : Defines the entry point for the console application.
//
/*
Largest prime factor
Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include "stdafx.h"


int main()
{
	std::cout << "Inside Main(): " << std::endl;
	__int64 l = 600851475143;
	CommonFunction f;
	__int64 p = l;
	__int64 lp = 1;
	for (__int64 i = 2; i <= l; i++) {
		if (f.checkPrime(i)) {
			int isP = 0;
			while (p % i == 0) {
				p = p / i;
				isP = 1;
			}
			if (isP == 1) {
				lp = i;
			}
		}
		if (p == 1)
			break;
	}
	std::cout << "The largest prime factor is: " << lp <<std::endl;
	std::cout << "Exit Main(): " << std::endl;

    return 0;
}

