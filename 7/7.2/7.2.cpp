// 7.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const int gsize = 10;
int read(int ar[], int limit);
void show_results(const int ar[], int n);
void show_avg(const int ar[], int n);
int main()
{
	using namespace std;
	int hole[gsize];

	cout << "Ten program wyswietli wyniki oraz ich srednia.\n";
	cout << "Mozna podac maksymalnie " << gsize << " wynikow. <q> konczy dzialanie programu.\n";

	int size = read(hole, gsize);
	if (size > 0) {
		show_results(hole, size);
		show_avg(hole, size);
	}
	cout << "Koniec programu.\n\n";
	cin.get(); 
    return 0;
}

void show_avg(const int ar[], int n) {
	float avg;
	int add = 0;
	for (int i = 0; i < n; i++)
		add += ar[i];
	avg = float(add) / n;
	std::cout << "\tSrednia wynikow: " << avg << std::endl;
}

void show_results(const int ar[], int n) {
	using namespace std;
	cout << "Wyniki: ";
	for (int i = 0; i < n; i++)
		cout << i + 1 << ". " << ar[i] << " ";
}

int read(int ar[], int limit) {
	using namespace std;
	int temp;
	int i;
	for (i = 0; i < limit; i++) {
		cout << "Podaj " << i + 1 << " wynik: ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprowadzanie danych przerwane.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}
