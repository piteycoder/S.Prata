// 4.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
struct food {
	std::string marka;
	float waga;
	int kalorie;
}; 
int main()
{
	using namespace std;
	int n;
	cout << "Podaj ilosc batonow: "; cin >> n;
	food *Batonik = new food[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Podaj marke batonika: "; cin.get();
		getline(cin, Batonik[i].marka);
		cout << "Teraz podaj jego mase: ";
		cin >> Batonik[i].waga;
		cout << "Teraz podaj jego kalorycznosc: ";
		cin >> Batonik[i].kalorie;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Baton " << Batonik[i].marka << ":\tMasa: " << Batonik[i].waga << " || Kalorycznosc: " << Batonik[i].kalorie << endl;
	}
    return 0;
}

