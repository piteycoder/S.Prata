// 7.8b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const int Seasons = 4;
const char* Snames[Seasons]{ "Wiosna","Lato","Jesien","Zima" };

struct cost {
	double expenses[Seasons];
};

void fill(cost* pa);
void show(cost* da);

int main()
{
	cost money;
	fill(&money);
	show(&money);
    return 0;
}

void fill(cost* pa) {
	using namespace std;
	for (int i = 0; i < Seasons; i++) {
		cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
		cin >> pa->expenses[i];
	}
}

void show(cost* da) {
	using namespace std;
	double total = 0.0;
	cout << "\nWYDATKI\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": " << da->expenses[i] << " zl" << endl;
		total += da->expenses[i];
	}
	cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}