// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    cout << "Please enter 3 times coordinates of x and y!";
    int x1, y1, x2, y2, x3, y3;
    cout << "\nFirst time: "; cin >> x1 >> y1;
    cout << "\nSecond time: "; cin >> x2 >> y2;
    cout << "\nThird time: "; cin >> x3 >> y3;
    int counter = 0;

    if (x1 * x1 + y1 * y1 <= 9 || x2 * x2 + y2 * y2 <= 9 || x3 * x3 + y3 * y3 <= 9)
    {
        counter += 10;
    }
    else if (x1 * x1 + y1 * y1 > 9 && x1 * x1 + y1 * y1 <= 16 || x2 * x2 + y2 * y2 > 9 && x2 * x2 + y2 * y2 <= 16
        || x3 * x3 + y3 * y3 > 9 && x3 * x3 + y3 * y3 <= 16)
    {
        counter += 5;
    }
    else
    {
        counter += 0;
    }

    cout << "You have got " << counter << " points";

    if (counter >= 20)
    {
        cout << "\nYou are a sniper!!";
    }
    else if (counter > 10 && counter < 20)
    {
        cout << "\nYou are a simple shooter!!";
    }
    else
    {
        cout << "\nYou are a begginer shooter!!";
    }
}