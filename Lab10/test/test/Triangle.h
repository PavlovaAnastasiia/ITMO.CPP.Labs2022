#pragma once
#include <iostream>
#include "Dot.h"

using namespace std;

class Triangle
{
public:
	Triangle(Dot* a, Dot* b, Dot* c) :d1(a), d2(b), d3(c) {findSide(); }

	double findSide();
	double findPerimetr();
	double findSquare();

	//void set_d1(Dot* dot1);
	//void set_d2(Dot* dot2);
	//void set_d3(Dot* dot3);

private:
	double ab;
	double bc;
	double ca;

	Dot* d1;
	Dot* d2;
	Dot* d3;
};
