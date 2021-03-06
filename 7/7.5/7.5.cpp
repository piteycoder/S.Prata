// 7.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

long double power(int);

int main()
{
	using namespace std;
	int number;
	cout << "Podaj liczbe, ktorej silnie chcesz poznac: ";
	while ((cin >> number) && number >= 0) {
		cout << "Wynik to ";
		cout << power(number);
		cout << ".\n";
		cout << "Podaj nastepna liczbe (q konczy program): ";
	}
	cout << "Do widzenia.\n";
    return 0;
}

long double power(int number) {
	if (number == 0) return 1;
	else return number * power(number - 1);
}