// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    cout << "Enter values for a,b,c: ";
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    double p = (a + b + c) / 2;
    double s;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout.precision(3);
    cout << "Result: " << s;
}


