#include <string>
#include <sstream>
#include <string>
#pragma once
using namespace std; 

class Human
{
public:
	//Human();
	Human(string, string, string, char);
	//void setHuman(string, string, string);
	string getHuman();
	string getFullName();
	virtual char getStatus() = 0;

protected:
	string name;
	string last_name;
	string phone;
	char status;
};
