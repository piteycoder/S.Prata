// 4.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
int main()
{
	using std::string; using std::cout; using std::cin;
	struct Batonik {
		string name;
		float weight;
		int kcal;
	};
	Batonik snack[3] = {
		{"Snickers",70.5,300},
		{"Mars",50.5,170},
		{"Twix",65.5,260}
	};
	for (int i = 0; i < 3; i++)
	{
		cout << "Batonik " << snack[i].name << " wazy " << snack[i].weight << "g i ma " << snack[i].kcal << " kalorii" << std::endl;
	}

    return 0;
}

