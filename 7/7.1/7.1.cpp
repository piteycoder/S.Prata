// 7.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

double harmon(int, int);
int main()
{
	std::cout << "Podawaj dwie liczby calkowite, niebedace zerem: ";
	int a, b;
	std::cin >> a >> b;
	while (a != 0 && b != 0) {
		std::cout << harmon(a, b) << std::endl;
		std::cin >> a >> b;
	}
	std::cout << "Koniec programu.\n";
    return 0;
}
double harmon(int a, int b) {
	double avg;
	avg = (2.0*a*b) / (a + b);
	return avg;
}