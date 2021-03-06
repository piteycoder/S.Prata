// 7.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct pudlo {
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};

void fill_struct(pudlo *box);
void show_box(pudlo box);
void calculate(pudlo *box);

int main()
{
	using namespace std;
	pudlo pudelko = {
		"P",
		1.0,
		1.0,
		1.0,
		1.0
	};

	fill_struct(&pudelko);
	calculate(&pudelko);
	show_box(pudelko);
    return 0;
}

void fill_struct(pudlo *box) {
	using namespace std;
	cout << "Podaj nazwe producenta: ";
	cin >> box->producent;
	cout << "Podaj wymiary\nWysokosc: ";
	cin >> box->wysokosc;
	cout << "Szerokosc: ";
	cin >> box->szerokosc;
	cout << "Dlugosc: ";
	cin >> box->dlugosc;
}

void show_box(pudlo box) {
	using std::cout;
	cout << "Producent: " << box.producent << std::endl;
	cout << "Wysokosc: " << box.wysokosc << std::endl;
	cout << "Szerokosc: " << box.szerokosc << std::endl;
	cout << "Dlugosc: " << box.dlugosc << std::endl;
	cout << "Objetosc: " << box.objetosc << std::endl;
}

void calculate(pudlo *box) {
	using namespace std;
	float v;
	v = box->dlugosc * box->szerokosc * box->wysokosc;
	box->objetosc = v;
}