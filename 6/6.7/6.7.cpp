// 6.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <string>

int main()
{
	using namespace std;
	string word;
	int vowels = 0, nouns = 0, other = 0;
	cout << "Podawaj slowa (pojedyncze q konczy)" << endl;
	cin >> word;
	while (word != "q") {
		if (!isalpha(word[0]))
			other++;
		else {
			switch (word[0]) {
			case'A':
			case'a':
			case'E':
			case'e':
			case'I':
			case'i':
			case'o':
			case'O':
			case'Y':
			case'y':
			case'U':
			case'u': vowels++;
				break;
			default: nouns++; break;
			}
		}
		cin >> word;
	}
	cout << nouns << " slow zaczyna sie od spoglosek\n" << vowels << " slow zaczyna sie od samoglosek\n";
	cout << other << " slow nie zalicza sie do zadnej z tych kategorii.\n";
    return 0;
}

