// 5.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
struct car {
	std::string samo;
	int year;
};
int start();
int main()
{
	int n;
	n = start();
	car*kat = new car[n];
	for (int i = 0; i < n; i++)
	{
		std::cout << "Podaj marke samochodu: ";
		getline(std::cin, kat[i].samo); 
		std::cout << "Teraz podaj rok produkcji: ";
		std::cin >> kat[i].year;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << kat[i].samo << "  Rok produkcji: " << std::endl;
	}
    return 0;
}
int start()
{
	using std::cout;
	int a;
	cout << "Ile aut chcesz skatalogowac?";
	std::cin >> a;
	return a;
}
