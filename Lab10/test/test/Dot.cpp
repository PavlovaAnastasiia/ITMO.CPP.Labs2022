#include "Dot.h"
#include <cmath>
#include <math.h>
#include <iostream>

Dot::Dot()
{
	x = 0; y = 0;
}
Dot::Dot(double x, double y)
{
	this->x = x;
	this->y = y;
}
double Dot::distanceTo(Dot* point) //composition
{
	return sqrt(pow(point->x - x, 2) + pow(point->y - y, 2));
}
double Dot::distanceToP(Dot point) //aggregation
{
	return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
}

