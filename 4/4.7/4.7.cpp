// 4.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	struct pizza {
		string name;
		int srednica;
		float weight;
	};
	pizza type;
	cout << "Podaj nazwe firmy produkujacej pizze: ";
	getline(cin, type.name);
	cout << "Podaj srednice pizzy: ";
	cin >> type.srednica;
	cout << "Podaj wage pizzy: ";
	cin >> type.weight;
	cout << type.name << " - " << type.srednica << "cm, " << type.weight << "g.\n";
    return 0;
}

