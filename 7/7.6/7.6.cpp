// 7.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int fill_array(double ar[], int n);
void show_array(const double ar[], int n);
void reverse_array(double ar[], int n);

int main()
{
	using namespace std;
	int s, size;
	cout << "Podaj wielkosc tablicy do wypelnienia: ";
	cin >> s;
	double *tab = new double[s];
	size = fill_array(tab, s);
	show_array(tab, size);
	if (size > 0) {
		reverse_array(tab, size);
		cout << "\nPo odwroceniu\n";
		show_array(tab, size);
	}
	delete[]tab;
	cout << "Do widzenia.\n";
    return 0;
}
void reverse_array(double ar[], int n) {
	double temp;
	
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		temp = ar[i];
		ar[i] = ar[j];
		ar[j] = temp;
	}
}

void show_array(const double ar[], int n) {
	using namespace std;
	cout << "Podane wartosci:\n";

	for (int i = 0; i < n; i++) {
		cout << "Wartosc nr. " << i + 1 << ": ";
		cout << ar[i] << endl;
	}
}

int fill_array(double ar[], int n) {
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < n; i++) {
		cout << "Podaj " << i + 1 << " wartosc: ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprowadzanie zakonczone.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}