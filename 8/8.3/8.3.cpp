// 8.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void toCaps(string &);
int main()
{
	string line;
	cout << "Podaj lancuch (q, aby zakonczyc): ";
	getline(cin, line);
	line[0] = tolower(line[0]);
	while (line != "q") {
		toCaps(line);
		getline(cin, line);
		line[0] = tolower(line[0]);
	}
	cout << "Do widzenia.\n";
	return 0;
}
void toCaps(string & line) {
	int length = line.length();
	for (int i = 0; i < length; i++)
		line[i] = toupper(line[i]);
	cout << line << endl;
	cout << "Podaj nastepny lancuch (q, aby zakonczyc): ";
}