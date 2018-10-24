// 6.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>

const int strsize = 30;
const int structsize = 5;

struct zpdw {
	char imie[strsize];
	char stanowisko[strsize];
	char pseudozpdw[strsize];
	int preferencje;
};

void menu();
int main()
{
	using namespace std;
	zpdw memb[structsize] = {
		{"Krzysztof","Kursant","Dziku",2},
	{"Leonard","Szewc","Broda",0},
	{"Patryk","Mlodszy programista","Piti",1},
	{"Szymon","Bezrobotny","Kiler",2},
	{"Konrad","Nacjololo","Kondziu",0}
	};
	char ch;
	menu();
	cin >> ch;
	while (ch!='q')
	{
		switch (ch)
		{
		case'a': for (int i = 0; i < structsize; i++) cout << memb[i].imie << endl; break;
		case'b': for (int i = 0; i < structsize; i++) cout << memb[i].stanowisko << endl; break;
		case'c': for (int i = 0; i < structsize; i++) cout << memb[i].pseudozpdw << endl; break;
		case'd': for (int i = 0; i < structsize; i++)
		{
			if (memb[i].preferencje == 0) cout << memb[i].imie << endl;
			else if (memb[i].preferencje == 1) cout << memb[i].stanowisko << endl;
			else if (memb[i].preferencje == 2)cout << memb[i].pseudozpdw << endl;
		} break;
		default: menu(); 
		}
		cin >> ch;
	}
	cout << "Do zobaczenia!\n";
    return 0;
}
void menu()
{
	using namespace std;
	cout << "a. lista wg imion\tb. lista wg stanowisk\n";
	cout << "c. lista wg pseudonimow d. lista wg preferencji\nq. koniec\nWybierz jedna z opcji: ";
}
