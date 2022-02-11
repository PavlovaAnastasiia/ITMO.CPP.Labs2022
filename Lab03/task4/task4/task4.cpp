// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

long double firBinSearch(double a, int n)
{
    double L = 0;
    double R = a;
    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a)
        {
            L = M;
        }
        else
        {
            R = M;
        }
    }
    return R;
}

int main()
{
    int R = firBinSearch(5, 9);
    cout << "Result: " << R << endl;
}

