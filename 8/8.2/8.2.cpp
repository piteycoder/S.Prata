// 8.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const int Size = 30;
using namespace std;

struct Batonik {
	char marka[Size];
	double weight;
	int calories;
};

void getData(Batonik &ra, const char* name, double weight, int cal);
void print(const Batonik &ra);
int main()
{
	cout << "Podaj ilosc batonikow do zapisania: ";
	int quantity;
	(cin >> quantity).get();
	Batonik * dataBase = new Batonik[quantity];
	for (int i = 0; i < quantity; i++)
		getData(dataBase[i], dataBase[i].marka, dataBase[i].weight, dataBase[i].calories);
	cout << "=|=|=|=|= L I S T A   B A T O N I K O W =|=|=|=|=\n";
	cout << "_________________________________________________\n";
	for (int i = 0; i < quantity; i++)
		print(dataBase[i]);
	delete[]dataBase;
    return 0;
}
void getData(Batonik &ra,const char* name = "Millenium Munch", double weight = 2.85, int cal = 350) {
	cout << "Marka: ";
	cin.getline(ra.marka, Size);
	cout << "Waga: ";
	cin >> ra.weight;
	cout << "Kalorie: ";
	(cin >> ra.calories).get();
}
void print(const Batonik &ra) {
	cout << "Marka   -> " << ra.marka << endl;
	cout << "Waga    -> " << ra.weight << endl;
	cout << "Kalorie -> " << ra.calories << endl;
	cout << "____________________________________________________" << endl;
}
