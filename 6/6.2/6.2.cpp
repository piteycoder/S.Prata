// 6.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <array>

int main()
{
	std::array<double, 10>tab; int i = 0;
	double avg, suma = 0;
	std::cin >> tab[i];
	while (std::cin>>tab[i] && i < 10)
	{
		suma += tab[i];
		i++; if (i == 10) break;
		std::cin >> tab[i];
	}
	avg = suma / i + 1;
	std::cout << "Srednia: " << avg << std::endl;
	while (i--)
	{
		if (tab[i]>avg) std::cout << tab[i]<< std::endl;
	}
    return 0;
}

