#include <iostream>
#include "Triangle.h"
#include "Dot.h"

//composition
double Triangle::findSide()
{
	ab = d1->distanceTo(d2);
	bc = d2->distanceTo(d3);
	ca = d3->distanceTo(d1);

	return ab, bc, ca;
}

double Triangle::findPerimetr()
{
	findSide();
	double p = (ab + bc + ca);
	p = (p * 100) / 100;
	return p;
}

double Triangle::findSquare()
{
	double p = findPerimetr() / 2;	
	double s = sqrt(p * (p - ab) * (p - bc) * (p - ca));
	s = (s * 100) / 100;
	return s;
}

//void Triangle::set_d1(Dot* dot1)
//{
//	Triangle::d1 = dot1;
//}
//void Triangle::set_d2(Dot* dot2)
//{
//	Triangle::d2 = dot2;
//}
//void Triangle::set_d3(Dot* dot3)
//{
//	Triangle::d3 = dot3;
//}

//aggregation
double Triangle::findSide1()
{
	ab = dA.distanceToP(dB);
	bc = dB.distanceToP(dC);
	ca = dC.distanceToP(dA);

	return ab, bc, ca;
}
double Triangle::findPerimetr1()
{
	findSide1();
	double p = (ab + bc + ca);
	p = (p * 100) / 100;
	return p;
}

double Triangle::findSquare1()
{
	double p = findPerimetr1() / 2;
	double s = sqrt(p * (p - ab) * (p - bc) * (p - ca));
	s = (s * 100) / 100;
	return s;
}

