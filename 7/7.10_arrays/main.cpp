#include <iostream>
const int arr=4;

double add(double,double);
double subtract(double,double);
double multiply(double,double);
double divide(double,double);
double calculate(double, double, double (*pf[])(double,double,int));

int main()
{
    using namespace std;
    double (*pa[arr])(double,double) = {add,subtract,multiply,divide};
    cout << "Podaj dwie dowolne liczby oddzielone spacja: ";
    double x,y;
    while(cin>>x>>y){
        for (int i=0;i<4;i++)
            cout << calculate(x,y,*(*pa)[i](x,y,arr)) << endl;
    }
    return 0;
}
double calculate(double x, double y, double (*pf[])(double x, double y,int arr))
{
    return (*pf)(x,y);
}
double divide(double x, double y)
{
    return x/y;
}
double multiply(double x,double y)
{
    return x*y;
}
double subtract(double x, double y)
{
    return x-y;
}
double add(double x, double y)
{
    return x+y;
}
