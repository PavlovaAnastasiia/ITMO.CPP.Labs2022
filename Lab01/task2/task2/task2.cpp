// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	string name;
	cout << "������� ���� ���";
	double x;
	//int x;
	double a, b;
	cout << "\n������� a � b:\n";
	cin >> a; // ���� � ���������� �������� a
	cin >> name;
	cin >> b; // ���� � ���������� �������� b
	x = a / b; // ���������� �������� x
	cout.precision(3);
	cout << "\nx = " << x << endl; //����� ���������� �� �����
	cout << "������, " << name << "!\n";
	cout << sizeof(a / b) << ends << sizeof(x) << endl;
	return 0;
}
