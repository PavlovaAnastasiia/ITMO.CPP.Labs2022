// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void privet(string name, int k)
{
	cout << name << ", " << "hello! " << "you input " << k << endl;
}

void privet(string name)
{
	cout << name << ", " << "hello!" << endl;
}


int main()
{
	string name;
	cout << "What is your name?" << endl;
	cin >> name;
	int k;
	cout << "Input number:" << endl;
	cin >> k;
	privet(name);
	privet(name, k);
	return 0;
}


