// 4.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
int main()
{
	using std::cin; using std::cout; using std::endl;
	const int size = 20;
	char name[size];
	char surname[size];
	cout << "Podaj swoje imie: ";
	cin.getline(name, size);
	cout << "Podaj swoje nazwisko: ";
	cin.getline(surname, size);
	cout << "Oto informacje zestawione w jeden napis: " << name << ", " << surname << endl;
    return 0;
}

