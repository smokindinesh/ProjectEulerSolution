// Problem7.cpp : Defines the entry point for the console application.
//
/*10001st prime
Problem 7 
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/

#include "stdafx.h"


int main()
{
	int i = 2;
	CommonFunction f;
	int c = 0;
	while (true)
	{
		if (f.checkPrime(i)) {
			c++;
		}
		if (c == 10001) {
			break;
		}
		i += 1;
	}
	std::cout << "The 10001st prime number is : " << i << std::endl;
    return 0;
}

