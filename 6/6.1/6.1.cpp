// 6.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>

int main()
{
	char ch;
	std::cin >> ch;
	while (ch != '@')
	{
		if (islower(ch)) std::cout << (char)toupper(ch);
		else if (isupper(ch)) std::cout << (char)tolower(ch);
		else if (!isdigit(ch)) std::cout << (char)ch;
		std::cin >> ch;
	}
    return 0;
}

