// 2.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
int main()
{
	using std::cin; using std::cout;
	std::string name, surname;
	int age, grade;
	cout << "Jak masz na imie? ";
	getline(cin, name);
	cout << "Jak masz na nazwisko? ";
	getline(cin, surname);
	cout << "Na jaka ocene zaslugujesz? ";
	cin >> grade;
	cout << "Ile masz lat? ";
	cin >> age;
	cout << "Nazwisko: " << surname << ", " << name << std::endl;
	cout << "Ocena: " << grade - 1 << "\nWiek: " << age << std::endl;
    return 0;
}

