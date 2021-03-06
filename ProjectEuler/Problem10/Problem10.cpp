// Problem10.cpp : Defines the entry point for the console application.
//
/*Summation of primes
Problem 10 
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/

#include "stdafx.h"


int main()
{
	CommonFunction f;
	__int64 sum = 0;
	for (__int64 i = 2; i < 2000000; i++) {
		if (f.checkPrime(i)) {
			sum += i;
		}
	}
	std::cout << "The sum of all the primes below two million is " << sum << std::endl;
    return 0;
}

