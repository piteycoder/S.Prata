// 2.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const int hek = 60;
const int hours = 24;
int main()
{
	using std::cin; using std::cout; using std::endl;
	long long sekundy;
	long min, hou, day, sec;
	cout << "Podaj liczbe sekund: ";
	cin >> sekundy;
	min = sekundy / hek;
	sec = sekundy % min;
	hou = min / hek;
	day = hou / hours;
	hou = hou % hek;
	min = min % hek;
	cout << sekundy << " sekund = " << day << " dni, " << hou << " godzin, " << min << " minut, ";
	cout << sec << " sekund" << endl;
    return 0;
}

