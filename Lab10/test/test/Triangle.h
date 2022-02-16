#pragma once
#include <iostream>
#include "Dot.h"

using namespace std;

class Triangle
{
public:
	Triangle(Dot* a, Dot* b, Dot* c) :d1(a), d2(b), d3(c) {findSide(); }
	Triangle(Dot a, Dot b, Dot c) :dA(a), dB(b), dC(c) { findSide1(); }

	double findSide();
	double findSide1();
	double findPerimetr();
	double findPerimetr1();
	double findSquare();
	double findSquare1();

	//void set_d1(Dot* dot1);
	//void set_d2(Dot* dot2);
	//void set_d3(Dot* dot3);

private:
	double ab;
	double bc;
	double ca;

	//composition
	Dot* d1;
	Dot* d2;
	Dot* d3;

	//aggregation
	Dot dA;
	Dot dB;
	Dot dC;
};
