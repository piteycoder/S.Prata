// 6.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
void menu();
std::string wybor();
int main()
{
	menu();
	std::cout << wybor() << std::endl;
    return 0;
}
std::string wybor()
{
	char cho;
	std::cout << "Prosze podac litere r, p, t lub g: ";
	std::cin >> cho;
	switch (cho)
	{
	case 'r': return "Zebra jest roslinozerca"; break;
	case 'p': return "Fryderyk Chopin byl pianista"; break;
	case 't': return "Klon jest drzewem"; break;
	case 'g': return "League of Legends to gra"; break;
	default: return wybor();
	}
}
void menu()
{
	using std::cout;
	cout << "r) roslinozerca\tp) pianista\n";
	cout << "d) drzewo\tg) gra\n";
}
