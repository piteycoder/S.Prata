// 1.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
unsigned int YearsTo(double x)
{
	return x * 63240;
}
int main()
{
	double lightyears;
	cout << "Podaj liczbe lat swietlnych:";
	cin >> lightyears;
	cout << lightyears << " lat swietlnych = " << YearsTo(lightyears) << " jednostek astronomicznych." << endl;
    return 0;
}

