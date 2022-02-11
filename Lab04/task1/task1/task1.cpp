// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


void fum_value(double k, double x, double y) //values
{
    x = x + k;
    y = y + k;
}
void fum_ptr(double k, double* x, double* y) //pointer
{
    *x = *x + k;
    *y = *y + k;
}
void fum_ref(double k, double& x, double& y) //reference
{
    x = x + k;
    y = y + k;
}

void print(double x, double y)
{
    cout << "x = " << x << "; y = " << y << endl;
}

int main()
{
    double k = 2.5;
    double xv = 10;
    double yv = 10;

    print(xv, yv);

    fum_value(k, xv, yv); // Передача в функцию обычного параметра
    print(xv, yv);

    fum_ptr(k, &xv, &yv); // Передача в функцию параметра указателя
    //fum_value(k, xv, yv);
    print(xv, yv);

    fum_ref(k, xv, yv); // Передача в функцию параметра ссылки
    print(xv, yv);
    return 0;
}

