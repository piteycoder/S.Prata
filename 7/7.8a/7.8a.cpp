// 7.8a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const int Seasons = 4;
const char* Snames[Seasons]{ "Wiosna","Lato","Jesien","Zima" };

void fill(double* pa);
void show(const double* da);

int main()
{
	double expenses[Seasons];
	fill(expenses);
	show(expenses);
    return 0;
}

void fill(double* pa) {
	using namespace std;
	for (int i = 0; i < Seasons; i++) {
		cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
		cin >> pa[i];
	}
}

void show(const double* da) {
	using namespace std;
	double total = 0.0;
	cout << "\nWYDATKI\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": " << da[i] << " zl" << endl;
		total += da[i];
	}
	cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}