// 6.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

struct trzdw {
	std::string surname;
	double amount;
};

int main()
{
	using namespace std;
	int p, nws;
	cout << "Podaj liczbe ofiarodawcow: ";
	cin >> p;
	if (p <= 0)
		cout << "Szkoda." << endl;
	else {
		trzdw *payers = new trzdw[p];
		for (int i = 0; i < p; i++) {
			cout << "Kwota " << i + 1 << " donatora: ";
			cin >> payers[i].amount;
			cout << "Nazwisko " << i + 1 << " donatora: ";
			cin >> payers[i].surname;
		}
		nws = 0;
		cout << "\nN a s i  W s p a n i a l i  S p o n s o r z y" << endl << endl;
		for (int i = 0; i < p; i++) {
			if (payers[i].amount >= 10000) {
				cout << payers[i].surname << "   " << payers[i].amount << endl;
				nws++;
			}
		}
		if (nws == 0)
			cout << "brak\n" << endl;
		nws = 0;
		cout << "\nNasi Sponsorzy\n\n";
		for (int i = 0; i < p; i++) {
			if (payers[i].amount < 10000) {
				cout << payers[i].surname << "   " << payers[i].amount << endl;
				nws++;
			}
		}
		if (nws == 0)
			cout << "brak\n\n";
		delete[]payers;
	}
    return 0;
}

