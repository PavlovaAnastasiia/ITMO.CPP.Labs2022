#pragma once
#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:

	Distance() : feet(0), inches(0.0) { }
	Distance(int ft, float in) : feet(ft), inches(in) { }
	void getdist()
	{
		cout << "enter number of feet";
		cin >> feet;
		cout << "\nenter number of inches";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\" - " << inches << "\"\n";
	}
	Distance operator+ (const Distance& d2) const
	{
		int f = feet + d2.feet;
		float i = inches + d2.inches;
		if (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}

	Distance operator- (const Distance& d2) const
	{
		int f = feet - d2.feet;
		float i = inches - d2.inches;
		if (i <= 0.0)
		{
			i += 12.0;
			f--;
		}
		return Distance(f, i);
	}
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
};

std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\" - " << dist.inches << "\"\n";
	return out;
}