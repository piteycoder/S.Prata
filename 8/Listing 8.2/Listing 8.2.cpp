// Listing 8.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rodents++\n";
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	//rzutowanie typu adresów na typ unsigned
	cout << "adres rats = " << &rats;
	cout << ", adres rodents = " << &rodents << endl;
    return 0;
}

