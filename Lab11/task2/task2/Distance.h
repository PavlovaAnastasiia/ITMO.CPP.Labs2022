#pragma once
#include <iostream>
#include "main.cpp"
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
	const float MTF;
public:
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }	
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
	{ }
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; 
		feet = int(fltfeet); 
		inches = 12 * (fltfeet - feet); 
	}
	void getdist()
	{
		std::cout << "\nÂâåäèòå ÷èñëî ôóòîâ : ";
		std::cin >> feet;
		std::cout << "\nÂâåäèòå ÷èñëî äþéìîâ : ";
		std::cin >> inches;
	}
	void getRandomDist()
	{
		feet = GetRandomInt(5, 25);
		inches = GetRandomInt(5, 25);
	}
	void showdist()
	{
		std::cout << feet << "\" - " << inches << "\"\n";
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
	Distance operator+ (const double& value) const
	{
		int f = feet;
		float i = inches + value;
		while (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}
	Distance operator- (const double& value) const
	{
		int f = feet;
		float i = inches - value;
		while (i <= 0.0)
		{
			i += 12.0;
			f--;
		}
		return Distance(f, i);
	}
	operator float() const
	{ 
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
};

std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\" - " << dist.inches << "\"\n";
	return out;
}

int GetRandomInt(int start = 0, int end = 10) {
	int step = end - start + 1;
	int val = start + rand() % step;
	return val;
}