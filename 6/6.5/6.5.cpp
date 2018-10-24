// 6.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>

const float taxp[4] = { 0,0.1,0.15,0.2 };

int main()
{
	using namespace std;
	int money = 0;
	cout << "Podaj kwote do opodatkowania: ";
	while (cin>>money) {
		if (money < 0)
			break;
		else {
			if (money <= 5000)
				cout << "Kwota podatku do zaplaty: " << money * taxp[0] << " twarpow" << endl;
			else if (money > 5000 && money <= 15000)
				cout << "Kwota podatku do zaplaty: " << (money - 5000)*taxp[1] << " twarpow" << endl;
			else if (money > 15000 && money <= 35000)
				cout << "Kwota podatku do zaplaty: " << 10000 * taxp[1] + ((money - 15000)*taxp[2]) << " twarpow" << endl;
			else
				cout << "Kwota podatku do zaplaty: " << 10000 * taxp[1] + 20000 * taxp[2] + ((money - 35000)*taxp[3])
				<< " twarpow" << endl;
		}
		cout << "Podaj kolejna kwote do opodatkowania: ";
	}
    return 0;
}

