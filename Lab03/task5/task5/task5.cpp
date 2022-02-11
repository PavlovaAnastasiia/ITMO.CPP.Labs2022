// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int addNumders(int n)
{
	if (n == 1) return 1; // выход из рекурсии
	else return (n + addNumders(n - 1));
}

int addNumders(int n, int m)
{
	if (n == m) return 1; // выход из рекурсии
	else return (m + addNumders(m - 1));
}

int gcd(int m, int n) //алгоритм Евклида
{
	if (n == 0) return m;
	return gcd(n, m % n);
}

int main()
{
	int num1;
	int num2;
	cin >> num1 >> num2;
	//int nadd = addNumders(num1);
	int nadd2 = addNumders(num1, num2);
	//cout << nadd << endl;
	int gcd1 = gcd(num1, num2);
	cout << nadd2 << endl;
	cout << "Euclid's algorithm = " << gcd1;
}

