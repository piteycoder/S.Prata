// 5.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int a, b, suma=0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
		suma += i;
	cout << suma << endl;
    return 0;
}

