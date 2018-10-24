#include <iostream>

double calculate(double, double,double(*pf)(double,double));
double add(double,double);
double multiply(double,double);

int main()
{
    using namespace std;
    double x,y;
    cout << "Podaj dwie dowolne liczby oddzielone spacja: ";
    while(cin>>x>>y){
        cout << calculate(x,y,add) << endl;
        cout << calculate(x,y,multiply) << endl;
        cout << "Podaj dwie kolejne liczby: ";
    }
    cout << "Gotowe.\n";
    return 0;
}
double calculate(double x, double y, double(*pf)(double,double))
{
    return (*pf)(x,y);
}
double multiply(double x, double y)
{
    return x*y;
}
double add(double x, double y)
{
    return x+y;
}
