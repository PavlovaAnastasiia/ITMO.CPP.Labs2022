#pragma once
#include <iostream>
#include <ostream>
#include <string>
using namespace std;

class Point
{
private:
	double x;
	double y;
public:
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	double distanceToCenter()
	{
		double s = sqrt(x*x + y*y);
		return s;
	}
	bool operator<(Point& p)
	{
		if(distanceToCenter() < p.distanceToCenter())
			return true;
		else
			return false;
	}
	string getPoint()
	{
		return "( " + to_string(x) + "; " + to_string(y) + " )";
	}
	friend std::ostream& operator<< (std::ostream&, Point&);

	double getX()
	{
		return x;
	}

	double getY()
	{
		return y;
	}
};

ostream& operator<<(ostream& out, Point& p)
{
	out << "{ " << p.getX() << ", " << p.getY() << " }";
	//out << p.getPoint();
	return out;
}
