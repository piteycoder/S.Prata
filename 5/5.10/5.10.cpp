// 5.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	std::cout << "Podaj liczbe wyswietlanych wierszy gwiazdek: ";
	int stars;
	std::cin >> stars;
	for (int i = 1; i <= stars; i++)
	{
		for (int j = 0; j < stars - i; j++)
		{
			std::cout << ".";
		}
		for (int j = stars - i; j < stars; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
    return 0;
}

