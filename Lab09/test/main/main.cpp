#include <iostream>
#include "Triangle.h"

using namespace std;

//class ifTriangleExist
//{
//public:
//	ifTriangleExist (): message ("Triangle does not exist! Please, try again!") {};
//	void printMessage() const { cout << message << endl; }
//private:
//	string message;
//};

int main()
{
    int a;
    int b;
    int c;

	cout << "Please, enter the lenght of the sides of a triangle! " << endl;
	cout << "first: ";
	cin >> a;
	cout << "\nsecond: ";
	cin >> b;
	cout << "\nthird: ";
	cin >> c;

	Triangle t(a, b, c);
	try 
	{
		double s = t.Triangle::findSquare(t);
		cout << "Square of triangle = " << s << endl;
	}
	catch (ifTriangleExist er)
	{
		cout << "ERROR!";
		er.printMessage();
		return 1;
	}
	return 0;
}

