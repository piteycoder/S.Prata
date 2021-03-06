// 7.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

long double probability(unsigned numbers, unsigned picks);
long double powerball(unsigned n);

int main()
{
	using namespace std;
	double total, choices, ball;
	cout << "Podaj najwieksza liczbe, jaka mozna wybrac, liczbe skreslen oraz "
		"najwieksza megaliczbe: ";
	while ((cin >> total >> choices >> ball) && choices <= total) {
		cout << "Szansa wygranej to jeden do ";
		cout << probability(total, choices) * powerball(ball);
		cout << ".\n";
		cout << "Nastepne trzy liczby (q, aby zakonczyc): ";
	}
	cout << "Do widzenia.\n";
    return 0;
}

long double powerball(unsigned n) {
	long double result = 1.0;
	result *= n;
	return result;
}

long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result *= n / p;
	return result;
}