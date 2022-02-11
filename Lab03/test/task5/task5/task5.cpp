// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ConvertToBinary(int n)
{
    if (n < 2)
        return n;
    else
        return (10 * ConvertToBinary(n / 2) + n % 2);
}

void decimalToBinary() {
    int val;
    cout << "Please, enter a value: " << endl;
    cin >> val;
    long inBinary = ConvertToBinary(val);
    std::cout << "Binary definition for " << val << " is " << inBinary << "!\n";

}

int main()
{
    decimalToBinary();
}

