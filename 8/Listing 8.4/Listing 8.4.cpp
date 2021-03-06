// Listing 8.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);
void show(int & a, int & b);

int main()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;

	show(wallet1, wallet2);

	cout << "Zamiana wartosci za pomoca referencji:\n";
	swapr(wallet1, wallet2);
	show(wallet1, wallet2);

	cout << "Zamiana wartosci za pomoca wskaznikow:\n";
	swapp(&wallet1, &wallet2);
	show(wallet1, wallet2);

	cout << "Proba zamiany przy przekazywaniu przez wartosc:\n";
	swapv(wallet1, wallet2);
	show(wallet1, wallet2);
	
    return 0;
}

void swapr(int & a, int & b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void swapp(int * p, int * q) {
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}
void swapv(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void show(int & a, int & b) {
	using std::cout;

	cout << "wallet1 = $" << a;
	cout << " wallet2 = $" << b << std::endl;
}