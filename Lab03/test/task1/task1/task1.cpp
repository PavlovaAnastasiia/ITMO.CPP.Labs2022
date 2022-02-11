// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

struct Point {
public:
	int x;
	int y;
	Point(int x1, int y1) {
		x = x1;
		y = y1;
	}
};

double trSide(Point one, Point two)
{
	double a = sqrt(pow(one.x - two.x, 2) + pow(one.y - two.y, 2));
	return a;
}


double calculateTrSquare(Point a, Point b, Point c)
{
	double ab = trSide(a, b);
	double bc = trSide(b, c);
	double ac = trSide(a, c);
	cout.precision(3);
	double p = (ab + bc + ac) / 2;
	return sqrt(p * (p - ab) * (p - bc) * (p - ac));
}

double calcPentagonSquare(Point a, Point b, Point c, Point d, Point e)
{
	double abc = calculateTrSquare(a, b, c);
	double acd = calculateTrSquare(a, c, d);
	double ade = calculateTrSquare(a, d, e);
	return abc + acd + ade;

}

int main()
{
	Point a(1, 1);
	Point b(1, 3);
	Point c(7, 1);
	Point d(7, 3);
	Point e(4, 5);

	double s = calcPentagonSquare(a, b, c, d, e);
	cout << "The square of this pentagon is " << s << " conventional units!";
}


