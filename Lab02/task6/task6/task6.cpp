// task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int s = 0;
	int k, m;
	cin >> k >> m;
	for (int i = 1;i <= 100;i++)
	{
		if ((i > k) && (i < m))
			continue;
		s += i;
	}
	cout << "sum = " << s << endl;
}
