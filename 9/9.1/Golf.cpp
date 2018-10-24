#include <iostream>
#include "Golf.h"

void setgolf(Golf & g, const char * name, int hc)
{
    for (int i = 0; i < LEN; i++){
        g.fullname[i] = name[i];
        if (name[i] == '\0')
            break;
    }
    g.handicap = hc;
}
bool setgolf(Golf & g)
{
    std::cout << "Podaj imie gracza: ";
    std::cin.get(g.fullname,LEN);
    if (!std::cin){
        std::cin.clear();
        return false;
    }
    std::cout << "Podaj wartosc handicapu: ";
    (std::cin >> g.handicap).get();
    return true;

}
void handicap(Golf & g, int hc)
{
    g.handicap = hc;
}
void showgolf(const Golf & g)
{
    using std::cout;
    cout << "Nazwa gracza: " << g.fullname << std::endl;
    cout << "Handicap: " << g.handicap << std::endl;
}
