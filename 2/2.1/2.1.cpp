// 2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const float ctf = 30.48;
const float ctc = 2.54;
int convcal(int);
int convfoot(int);
int main()
{
	int cm;
	cout << "Podaj swoj wzrost w centymetrach: ";
	cin >> cm;
	cout << "Twoj wzrost w stopach i calach: " << convfoot(cm) << "stop i " << convcal(cm) << "cali" << endl;
    return 0;
}
int convcal(int cm)
{
	return (cm-convfoot(cm)*ctf)/ctc;
}
int convfoot(int cm)
{
	return cm / ctf;
}

