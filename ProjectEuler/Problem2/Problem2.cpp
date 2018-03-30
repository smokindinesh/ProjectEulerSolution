// Problem2.cpp : Defines the entry point for the console application.
//
/*
Even Fibonacci numbers
Problem 2 
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include "stdafx.h"


int main()
{
	int a = 0;
	int b = 1;
	int c = 0;
	int s = 0;
	while (c <= 4000000) {
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			s += c;
	}
	std::cout << "The sum of even valued terms is: " << s << std::endl;

    return 0;
}

