// 5.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
int main()
{
	char word[20];
	int count = 0;
	std::cout << "Podawaj slowa oddzielane spacja" << std::endl;
	std::cin >> word;
	while (strcmp(word,"gotowe"))
	{
		count++;
		std::cin >> word;
	}
	std::cout << "Podano " << count << " slow." << std::endl;
    return 0;
}

