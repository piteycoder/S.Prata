// 4.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
int main()
{
	using std::string;
	struct Batonik {
		string marka;
		float waga;
		int kcal;
	};
	Batonik snack = {
		"Mocha Munch",
		2.3,
		350
	};
	std::cout << snack.marka << std::endl;
	std::cout << snack.waga << std::endl;
	std::cout << snack.kcal << std::endl;	
	return 0;
}

