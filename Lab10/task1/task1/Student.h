#pragma once
#include <string>
#include "IdCard.h"

using namespace std;
class Student
{
public:
	Student(string name, string last_name, IdCard* id);

	void set_name(string name);
	string get_name();
	void set_last_name(string last_name);
	string get_last_name();
	void set_scores(int student_scores[]);
	void set_average_score(double ball);
	double get_average_score();

	void setIdCard(IdCard* c);
	IdCard getIdCard();

	/*Student(string name, string last_name, IdCard *id)
	{
		Student::set_name(name);
		Student::set_last_name(last_name);
		Student::setIdCard(id);
	}*/

private:
	int scores[5];
	double average_score;
	string name;
	string last_name;
	IdCard* iCard;
};

