// 5.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>

int main()
{
	int add = 0;
	std::array<int, 12> mc;
	std::string mies[12]{ "Styczen","Luty","Marzec","Kwiecien","Maj","Czerwiec","Lipiec","Sierpien",
	"Wrzesien","Pazdziernik","Listopad","Grudzien" };
	for (int i = 0; i < 12; i++)
	{
		std::cout << "Podaj wynik sprzedazy na miesiac " << mies[i] << ": ";
		std::cin >> mc[i];
		add += mc[i];
	}
	std::cout << "Laczna sprzedaz = " << add << std::endl;
    return 0;
}

