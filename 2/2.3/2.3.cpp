// 2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const float StoM = 3600;
const float MtoH = 60;
float dec(int, int, int);
int main()
{
	using std::cout;
	using std::cin;
	cout << "Podaj dlugosc w stopniach, minutach i sekundach:\nNajpierw podaj stopnie: ";
	int stopnie, minuty, sekundy;
	cin >> stopnie;
	cout << "Nastepnie podaj minuty stopnia luku: ";
	cin >> minuty;
	cout << "Na koniec podaj sekundy luku: ";
	cin >> sekundy;
	cout << stopnie << " stopni/ie, " << minuty << " minut/ty, " << sekundy << " sekund/dy = ";
	cout << dec(stopnie, minuty, sekundy) << " stopni" << std::endl;
    return 0;
}
float dec(int st, int mi, int se)
{
	return st + mi / MtoH + se / StoM;
}
