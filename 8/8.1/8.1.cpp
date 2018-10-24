// 8.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const int MAX = 50;
using namespace std;

void print(const char* word, int i = 0 ) {
	for (int j = 0; j <= i; j++)
		cout << j + 1 << ". " << word << endl;
}
int main()
{
	char word[MAX] = "y";
	int number, i = 0;
	cout << "Wpisz dowolne slowo: ";
	while (cin >> word) {
		if (word[0] == 'q')
			break;
		cout << "Podaj dowolna liczbe: ";
		(cin >> number).get();
		if (number != 0)
			print(word, i++);
		else {
			print(word);
			i++;
		}
		cout << "Wpisz kolejne slowo (q zamyka): ";
	}
	cout << "Do widzenia!" << endl;
    return 0;
}

