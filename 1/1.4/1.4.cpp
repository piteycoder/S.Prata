// 1.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
unsigned short AgeInMonths(int x)
{
	return x * 12;
}
int main()
{
	unsigned short age;
	cout << "Podaj swoj wiek:";
		cin >> age;
	cout << "Twoj wiek w miesiacach: " << AgeInMonths(age) << endl;
    return 0;
}

