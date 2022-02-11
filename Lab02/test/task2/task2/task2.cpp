// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers, please >> ";
    cin >> a >> b >> c;
    int temp;
    if (a >= b) {
        temp = a;
    }
    else {
        temp = b;
    }
    if (c >= temp) {
        cout << "The biggest number is " << c << endl;
    }
    else {
        cout << "The biggest number is " << temp << endl;
    }
}
