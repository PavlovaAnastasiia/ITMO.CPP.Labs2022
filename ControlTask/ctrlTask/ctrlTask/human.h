#include <string>
#include <sstream>
#include <string>
using namespace std;
#pragma once 

class Human
{
public:
	Human();
	Human(string, string, string);
	void setHuman(string, string, string);
	string getHuman();
	string getFullName();

private:
	string name;
	string last_name;
	string phone;
};

