#include <iostream>
#include "Golf.h"

int main()
{
    int i, j;
    std::cout << "Ilosc graczy: ";
    (std::cin >> i).get();
    Golf * golf = new Golf [i];
    j=i;
    setgolf(golf[0], "XYZ", 1300);
    while(i--){
        if (setgolf(golf[i]) == false)
        break;
    }
    for(int i =0; i < j; i++)
        showgolf(golf[i]);
    delete[] golf;
    return 0;
}
