// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int recursFunc(int n, int a)
{
	int s;
	//a = 5;

	if (n == 1)
	{
		return a;
	}
	else return (a * n + recursFunc(n - 1, a));
}

int main()
{
	int n, sum, a;
	cout << "Please, enter a value!" << endl;
	cin >> a;
	cout << "Please, enter an amount of times!" << endl;
	cin >> n;
	sum = recursFunc(n, a);
	cout << "The result of addition is " << sum;
}


