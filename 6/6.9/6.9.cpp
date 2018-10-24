// 6.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

struct payers {
	char name[50];
	int amount;
};

int main()
{
	using namespace std;
	ifstream file;
	int n, i = 0, ten = 0, other = 0;
	char filename[20];
	cout << "Podaj nazwe pliku do odczytania: ";
	cin >> filename;
	file.open(filename);
	if (!file.is_open()) {
		cout << "Nie udalo sie otworzyc pliku, program zostanie zakonczony.\n";
		exit(EXIT_FAILURE);
	}
	file >> n;
	payers * tab = new payers[n];
	file.ignore();
	while (file.getline(tab[i].name, 50)) {
		(file >> tab[i].amount).get();
		if (tab[i].amount >= 10000)
			++ten;
		else
			++other;
		if (++i == n)
			break;
	}
	if (file.eof())
		cout << "Koniec pliku.\n";
	else if (file.fail())
		cout << "Koniec wczytywania pliku - blad.\n";
	else
		cout << "Nieznany blad.\n";
	file.close();

	cout << "\nN A S I  W S P A N I A L I  S P O N S O R Z Y\n\n";
	if (ten == 0)
		cout << "Brak\n\n";
	else {
		for (int i = 0; i < n; i++) {
			if (tab[i].amount >= 10000)
				cout << tab[i].name << " ::: " << tab[i].amount << endl;
		}
	}
	cout << "\nNASI SPONSORZY\n";
	if (other == 0)
		cout << "Brak\n\n";
	else {
		for (int i = 0; i < n; i++) {
			if (tab[i].amount < 10000)
				cout << tab[i].name << " :: " << tab[i].amount << endl;
		}
		cout << endl;
	}
	delete[]tab;
    return 0;
}

