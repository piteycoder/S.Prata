// 1.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void hours(int x)
{
	cout << x;
}
void minutes(int y)
{
	cout << y;
}
int main()
{
	int hour, minute;
	cout << "Podaj liczbe godzin: "; cin >> hour;
	cout << "Podaj liczbe minut: "; cin >> minute;
	cout << "Czas: "; hours(hour); cout << ":"; minutes(minute); cout << endl;
    return 0;
}

