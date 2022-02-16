#pragma once
#include "human.h"
#include <iostream>

class Student: public Human
{
public:
	Student();
	Student(string name, string last_name, string phone, string institution) :
		Human(name, last_name, phone)
	{
		set_institution(institution);
	}

	void set_institution(string institution)
	{
		Student::institution = institution;
	}
	string get_institution()
	{
		return Student::institution;
	}

private:
	string institution;
};

