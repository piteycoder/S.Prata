// 5.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const int years = 3;
const int months = 12;
int main()
{
	const char *mc[12] = {
		"Styczen", "Luty", "Marzec", "Kwiecien", "Maj", "Czerwiec", "Lipiec", "Sierpien",
		"Wrzesien", "Pazdziernik", "Listopad", "Grudzien"
	};
	int sales[years][months];
	int smonths[months]{ 0,0,0 };
	int syears = 0;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Sprzedaz na " << i + 1 << " rok:" << std::endl;
		for (int j = 0; j < 12; j++)
		{
			std::cout << mc[j] << ":";
			std::cin >> sales[i][j];
			smonths[i] += sales[i][j];
		}
		syears += smonths[i];
	}
	for (int i = 0; i < years; i++)
	{
		std::cout << "Sprzedaz na " << i + 1 << " rok: " << smonths[i] << std::endl;
	}
	std::cout << "Suma lacznie: " << syears << std::endl;
    return 0;
}

