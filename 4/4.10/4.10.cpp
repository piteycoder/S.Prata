// 4.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>

int main()
{
	using namespace std;
	array<float, 3> score;
	float avg; float suma = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "Podaj czas biegu: ";
		cin >> score.at(i);
		suma += score.at(i);
		cout << "Czas " << i + 1 << " biegu: " << score.at(i) << endl;
	}
	avg = suma / 3;
	cout << "Sredni czas: " << avg << endl;
    return 0;
}

