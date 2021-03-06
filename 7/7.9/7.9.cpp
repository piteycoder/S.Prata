// 7.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Podaj wielkosc grupy: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[]ptr_stu;
	cout << "Gotowe.\n";
    return 0;
}

int getinfo(student pa[], int n) {
	using namespace std;
	cout << "UZUPELNIANIE DANYCH.\n";
	int i;

	for (i = 0; i < n; i++) {
		cout << "Imie " << i + 1 << " studenta(ENTER aby zakonczyc): ";
		if (!(cin.get(pa[i].fullname, SLEN))) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Wczytywanie danych przerwane.\n";
			break;
		}
		cin.get();
		cout << "Hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "ooplevel: ";
		(cin >> pa[i].ooplevel).get();
	}
	return i;
}

void display1(student st) {
	cout << "Przekazanie struktury poprzez wartosc: " << st.fullname << "\t" << st.hobby << "\t" << st.ooplevel << endl;
}

void display2(const student* ps) {
	cout << "Przekazanie struktury poprzez wskaznik: " << ps->fullname << "\t" << ps->hobby << "\t" << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Przekazanie tablicy struktur poprzez wskaznik: " << pa[i].fullname << "\t" << pa[i].hobby << "\t" << pa[i].ooplevel << endl;
	}
}