// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char op;
    cout << "������ ���� �����, ������ ���� ���� �����: ";
    cin >> op;
    /*switch (op)
    {
    case 'S':
        cout << "����� ������ ������\n";
        cout << "������ �������\n";
        cout << "������ ���������\n";
        break;
    case 'V':
        cout << "����������� ����\n";
        cout << "����� ������ ������\n";
        cout << "������ �������\n";
        cout << "������ ���������\n";
        break;
    default:
        cout << "������ �������\n";
        cout << "������ ���������\n";*/
    switch (op)
    {
        case 'V':
            cout << "����������� ����\n";
        case 'S':
            cout << "����� ������ ������\n";
        default:
            cout << "������ �������\n";
            cout << "������ ���������\n";
    }
}

