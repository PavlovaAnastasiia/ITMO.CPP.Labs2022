#include <iostream>
#include "Triangle.h"
#include "Dot.h"

using namespace std;

int main()
{	//composition
	Dot* A = new Dot(0, 0);
	Dot* B = new Dot(0, 3);
	Dot* C = new Dot(4, 0);
	Triangle* tringle = new Triangle(A, B, C);
	cout << " Perimeter is " << tringle->findPerimetr() << "; Square is " << tringle->findSquare() << endl;
}