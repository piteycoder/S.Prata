// 5.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	std::cout << "Podaj pierwsza liczbe: ";
	int a, suma=0;
	std::cin >> a;
	suma += a;
	std::cout << "Suma podanych liczb = " << suma << std::endl;
	while (a != 0)
	{
		std::cout << "Podaj kolejna liczbe (0 konczy dzialanie programu): ";
		std::cin >> a;
		suma += a;
		std::cout << "Suma podanych liczb = " << suma << std::endl;
	}
	std::cout << "Dziekuje" << std::endl;
    return 0;
}

