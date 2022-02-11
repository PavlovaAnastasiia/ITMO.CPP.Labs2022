// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Please enter a year >> ";
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "The year is a leap year!";
    }
    else
    {
        cout << "The year is not a leap year!";
    }
}

