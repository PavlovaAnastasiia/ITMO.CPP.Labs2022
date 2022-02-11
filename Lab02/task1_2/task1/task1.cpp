// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{	
	double x, y;
	cout << "Enter values x and y for point (x;y): ";
	cin >> x >> y;
	if (x * x + y * y < 9 && y > 0)
		cout << "Point is inside";
	else if (x * x + y * y > 9 || y < 0)
		cout << "\nPoint is outside";
	else cout << "\nPoint is on the boarder";
}


