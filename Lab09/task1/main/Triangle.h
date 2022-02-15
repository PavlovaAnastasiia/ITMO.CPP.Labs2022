#pragma once
#include <iostream>

using namespace std;

class Triangle
{
private:
	int a;
	int b;
	int c;

public:
	Triangle(int aa, int bb, int cc)
	{
		set_a(aa);
		set_b(bb);
		set_c(cc);
	}
	/*Triangle()
	{
		int a = 0;
		int b = 0;
		int c = 0;
	}*/

	void set_a(int aa)
	{
		a = aa;
	}
	void set_b(int bb)
	{
		b = bb;
	}
	void set_c(int cc)
	{
		c = cc;
	}
	int get_a()
	{
		return a;
	}
	int get_b()
	{
		return b;
	}
	int get_c()
	{
		return c;
	}

	double findSquare(Triangle t)
	{
		//Triangle t(a, b, c);
		double p = (a + b + c) / 2;
		double s;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}
};

