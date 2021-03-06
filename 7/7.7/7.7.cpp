// 7.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const int Max = 5;

double* fill_array(double* beg, double* end);
void show_array(const double* beg, const double* end);
void revalue(double r, double* beg, double* end);

int main()
{
	using namespace std;
	double properties[Max];

	double* size = fill_array(properties, properties + Max);
	show_array(properties, size);
	if (size > 0) {
		cout << "Podaj czynnik zmiany wartosci: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Niepoprawna wartosc; podaj liczbe: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Gotowe.\n";
	cin.get(); cin.get();
    return 0;
}

double* fill_array(double* beg, double* end) {
	using namespace std;
	double* temp;
	int i;
	for (temp = beg, i = 1; temp != end; temp++, i++) {
		cout << "Podaj wartosc nr " << i << ": ";
		cin >> *temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprowadzanie danych przerwane.\n";
			break;
		}
		else if (temp < 0)
			break;
	}
	return temp;
}

void show_array(const double* beg, const double* end) {
	using namespace std;
	const double* i;
	int j;
	for (i = beg, j=1; i != end; i++,j++) {
		cout << "Nieruchomosc nr " << j << ": ";
		cout << *i << endl;
	}
}

void revalue(double r, double* beg, double* end) {
	
	for (double* i = beg; i != end; i++)
		*i *= r;
}