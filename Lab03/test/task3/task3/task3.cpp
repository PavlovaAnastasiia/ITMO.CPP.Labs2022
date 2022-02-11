// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double trSquare(double a)
{
	double s = (pow(a, 2) * sqrt(3)) / 4;
	return s;
}
double trSquare(double a, double b, double c)
{
	double p = (a + b + c) / 2; 
	double s;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}

int main()
{
	double a, b, c;
	double res;
	string t;
	cout << "For which triangle are you looking for the square (equilateral, scalene)?" << endl;
	cin >> t;
	if (t == "equilateral")
	{
		cout << "Please, enter a value of one side!" << endl;
		cin >> a;
		res = trSquare(a);
		cout << "The result: " << res;
	}
	else if (t == "scalene")
	{
		cout << "Please, enter a value of three sides!" << endl;
		cin >> a >> b >> c;
		res = trSquare(a, b, c);
		cout << "The result: " << res;
	}
	else
	{
		cout << "Error: please, try again!";
	}
}


