// 1.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
string ep(void)
{
	return "Entliczek pentliczek\n";
}
string cs(void)
{
	return "Czerwony stoliczek\n";
}
int main()
{
	cout << ep() << ep() << cs() << cs();
    return 0;
}

