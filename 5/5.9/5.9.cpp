// 5.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::string word;
	int count = 0;
	std::cout << "Podawaj slowa";
	std::cin >> word;
	while (word != "gotowe")
	{
		count++;
		std::cin >> word;
	}
	std::cout << "Podano " << count << " slow" << std::endl;
    return 0;
}

