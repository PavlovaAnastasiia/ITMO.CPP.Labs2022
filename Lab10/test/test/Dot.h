#pragma once
#include <iostream>

using namespace std;

class Dot
{
private:
	double x;
	double y;

public:
	Dot();
	Dot(double x, double y);
	double distanceTo(Dot* point);
};

