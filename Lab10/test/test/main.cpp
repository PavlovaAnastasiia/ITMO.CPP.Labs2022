#include <iostream>
#include "Triangle.h"
#include "Dot.h"

using namespace std;

int main()
{	//composition
	Dot* A = new Dot(0, 0);
	Dot* B = new Dot(0, 3);
	Dot* C = new Dot(4, 0);
	Triangle* t = new Triangle(A, B, C);
	cout << "The perimeter of the triangle is " << t->findPerimetr() << 
		"; The square is " << t->findSquare() << "!" << endl;

	//aggregation
	Dot A1(0, 0);
	Dot B1(0, 3);
	Dot C1(4, 0);
	Triangle t1(A1, B1, C1);
	cout << "The perimeter of the triangle is " << t1.findPerimetr1() <<
		"; The square is " << t1.findSquare1() << "!" << endl;
}