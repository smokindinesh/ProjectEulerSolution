// Problem9.cpp : Defines the entry point for the console application.
//
/*Special Pythagorean triplet
Problem 9 
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/

#include "stdafx.h"


int main()
{
	int a=0, b=0, c=0;
	for (int k = 1; k < 1000; k++) {
		//std::cout <<"Entered K"<< std::endl;
		for (int j = 1; j < k; j++) {
			//std::cout << "Entered J" << std::endl;
			for (int i = 1; i < j; i++) {
				//std::cout << "Entered i" << std::endl;
				int x = j * j + i * i;
				int z = 1000 - j - i;
				//std::cout << "value of X: " << x <<"Y: "<< z <<std::endl;
				if ((k * k == x) && k == z) {
					a = i;
					b = j;
					c = k;
				}
			}
		}
	}

	std::cout << "The value of a = "<<a<<" b = "<<b<<" and c = "<<c<< std::endl;
	std::cout << "The product of abc " << a*b*c << std::endl;

    return 0;
}

