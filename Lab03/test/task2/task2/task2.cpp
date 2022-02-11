// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

double calcCubeRootPow(double n) 
{
	return pow(n, 1.0 / 3);
}

double calcCubeRootItr(double n)
{
	double x1 = n;
    double x = 0;
    while (true)
    {
        x = (1.0 / 3) * ((n / (x1 * x1)) + (2 * x1));
        if (abs(x1 - x) < 0.0001)
        {
            break;
        }
        x1 = x;
    }
    return x;
}

int main()
{
	double n;
	cout << "Please, enter a number " << endl;
	cin >> n;
	cout << "The result of easy(pow) function is n = " << calcCubeRootPow(n);
	cout << "\nThe result of iterative function is n = " << calcCubeRootItr(n);
}


