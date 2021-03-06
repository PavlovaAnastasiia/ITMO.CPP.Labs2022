#pragma once
#include "human.h"
#include <iostream>

class Student : public Human
{
public:
	Student();
	Student(string name, string last_name, string phone, char status, string institution) :
		Human(name, last_name, phone, status)
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
	static Human* createStudent(string name, string last_name, string phone, char status, string institution)
	{
		return new Student(name, last_name, phone, status, institution);
	}

	char getStatus() override;

private:
	string institution;
};

