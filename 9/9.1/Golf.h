#ifndef GOLF_H
#define GOLF_H

using namespace std;
const int LEN = 40;
struct Golf
{
    char fullname[LEN];
    int handicap;
};

void setgolf(Golf & g, const char * name, int hc);
bool setgolf(Golf & g);
void handicap(Golf & g, int hc);
void showgolf(const Golf & g);

#endif // GOLF_H
