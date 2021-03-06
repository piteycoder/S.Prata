// 6.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>


int main()
{
	using namespace std;
	ifstream file;
	char filename[30], ch;
	int count1 = 0, count2 = 1;
	cout << "Podaj nazwe pliku z tekstem: ";
	cin >> filename;
	file.open(filename);
	if (!file.is_open()) {
		cout << "Nie znaleziono pliku!\nProgram zostanie zakonczony!\n";
		exit(EXIT_FAILURE);
	}
	while (file>>ch) {
		if (ch == ' ')
			++count2;
		else
			++count1;
	}
	if (file.eof())
		cout << "Koniec pliku!\n";
	else if (file.fail())
		cout << "Koniec wczytywania pliku - blad.\n";
	else
		cout << "Koniec wczytywania pliku - nieznana przyczyna.\n";
	if (count1 == 0)
		cout << "Nie przetworzono zadnych danych.\n";
	else {
		cout << "Wyrazow: " << count2 << endl;
		cout << "Znakow: " << count1 << endl;
	}
	file.close();
	getchar();
	return 0;
}

