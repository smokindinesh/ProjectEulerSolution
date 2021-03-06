// Problem4.cpp : Defines the entry point for the console application.
//
/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include "stdafx.h"


int main()
{
	CommonFunction f;
	int a = 0;
	int p = 0;
	for (int j = 999; j > 99; j--) {
		for (int i = 999; i > 99; i--) {
			a = j * i;
			if (f.checkPalindrome(a)) {
				if (a > p) {
					p = a;
				}
			}
		}
	}

	std::cout << "This is highest palindrome: " << p << std::endl;

    return 0;
}

