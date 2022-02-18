#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Item
{
private:
	string title;
	double price;
public:
	virtual void getdata()
	{
		cout << "\nEnter a title : ";
		cin >> title;
		cout << "\nEnter a value : ";
		cin >> price;
	}
	virtual void putdata()
	{
		cout << "A title: " << title;
		cout << "Price: " << price;
	}
};
