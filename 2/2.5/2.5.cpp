// 2.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	long long world, country;
	std::cout << "Podaj liczbe ludnosci swiata: ";
	std::cin >> world;
	std::cout << "Podaj liczbe ludnosci Polski: ";
	std::cin >> country;
	float percent;
	percent = (country * 100) / float(world);
	std::cout << "Populacja Polski stanowi " << percent << "% populacji swiata.\n";
    return 0;
}

