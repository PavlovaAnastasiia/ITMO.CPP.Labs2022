// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	string name;
	cout << "Введите свое имя";
	double x;
	//int x;
	double a, b;
	cout << "\nВведите a и b:\n";
	cin >> a; // ввод с клавиатуры значения a
	cin >> name;
	cin >> b; // ввод с клавиатуры значения b
	x = a / b; // вычисление значения x
	cout.precision(3);
	cout << "\nx = " << x << endl; //вывод результата на экран
	cout << "Привет, " << name << "!\n";
	cout << sizeof(a / b) << ends << sizeof(x) << endl;
	return 0;
}
