// 5.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const int capital = 100;
int main()
{
	float Cleo = 100, Dafne = 100;
	while (Cleo <= Dafne)
	{
		Cleo = Cleo + Cleo * 0.05;
		Dafne = Dafne + capital * 0.1;
	}
	std::cout << "Kapital Cleo = " << Cleo << "\nKapital Dafne = " << Dafne << std::endl;
    return 0;
}
