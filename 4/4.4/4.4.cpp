// 4.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
int main()
{
	using std::cout; using std::cin; using std::endl; using std::string;
	string name;
	string surname;
	string a = { ", " };
	string text;
	cout << "Podaj imie: ";
	getline(cin, name);
	cout << "Podaj nazwisko: ";
	getline(cin, surname);
	text = name + a + surname;
	cout << "Oto informacje zestawione w jeden napis: " << text << endl;
    return 0;
}

