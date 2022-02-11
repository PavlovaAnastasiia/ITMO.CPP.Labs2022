// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, temp;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	//алгоритм Евклида
	while (a != b)
	{
		if (a > b)
			a -= b; 
		else
			b -= a;
	}
	cout << "NOD = " << a << endl;
}

