// 1.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int miles_to_ms(int x);
int main()
{
	int miles;
	cout << "Podaj odleglosc w milach: ";
	cin >> miles;
	cout << "W metrach: " << miles_to_ms(miles) << endl;
    return 0;
}
int miles_to_ms(int x)
{
	return x * 1852;
}
