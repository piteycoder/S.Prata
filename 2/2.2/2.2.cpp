// 2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const float meters = 0.0254;
const float kilos = 2.2;
const int cals = 12;
int heightcal(int, int);
float heightm(int);
float weight(int);
int main()
{
	std::cout.precision(4);
	std::cout << "Podaj swoj wzrost w stopach i calach, oddzielajac je spacja: ";
	int foot, cal;
	std::cin >> foot >> cal;
	std::cout << "Podaj swoja wage w funtach: ";
	int pound;
	std::cin >> pound;
	float BMI = weight(pound) / (heightm(heightcal(foot, cal))*heightm(heightcal(foot, cal)));
	std::cout << "Twoje BMI to: " << BMI << std::endl;
    return 0;
}
float weight(int pound)
{
	return pound / kilos;
}
float heightm(int cal)
{
	return meters * cal;
}
int heightcal(int foot, int cal)
{
	return foot * cals + cal;
}

