// GaussFunc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	double s;
	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
	cout << "Enter values x and y for poligon vertices: ";
	cout << "Point 1: ";
	cin >> x1 >> y1;
	cout << "Point 2: ";
	cin >> x2 >> y2;
	cout << "Point 3: ";
	cin >> x3 >> y3;
	cout << "Point 4: ";
	cin >> x4 >> y4;
	cout << "Point 5: ";
	cin >> x5 >> y5;

	s = ((x1 * y2) + (x2 * y3) + (x3 * y4) + (x4 * y5) + (x5 * y1) - (x2 * y1) - (x3 * y2) - (x4 * y3) - (x5 * y4) - (x1 * y5)) / 2;
	cout << "Square of poligon equals " << s;
}

