// 4.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	struct food {
		string maker;
		int srednica;
		int waga;
	};
	food *pizza = new food;
	cin >> pizza->srednica >> pizza->maker >> pizza->waga;
	cout << pizza->maker << pizza->srednica << pizza->waga << endl;
    return 0;
}

