// 1.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int CelsiusToFarenheit(int x)
{
	return (1.8*x) + 32;
}
int main()
{
	int celsius;
	cout << "Podaj temperature w stopniach Celsjusza:";
	cin >> celsius;
	cout << celsius << " stopni Celsjusza to " << CelsiusToFarenheit(celsius) << " stopni Farhrenheita." << endl;
    return 0;
}

