#pragma once
#include <iostream>
#include "Item.h"
using namespace std;

class Paperbook : public Item
{
private:
	int pages;
public:
	void getdata()
	{
		Item::getdata();
		cout << "Please, enter number of pages.";
		cin >> pages;
	}
	void putdata()
	{
		Item::putdata();
		cout << "A number of pages: " << pages;
	}
};


