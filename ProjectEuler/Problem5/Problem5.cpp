// Problem5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a=20;
	int b;
	while (true)
	{
		b = 1;
		for (int i = 1; i < 20; i++) {
			if (a % i != 0) {
				b = 0;
				break;
			}
		}
		if (b == 0) {
			a = a + 20;
		}
		else {
			break;
		}
	}
	std::cout << "This is smallest multiple is : " << a << std::endl;
    return 0;
}

