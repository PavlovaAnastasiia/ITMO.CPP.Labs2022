#include <iostream>
#include <string>
#include "student.h"
#include <fstream>

void Student::set_name(string student_name)
{
	name = student_name;
}

string Student::get_name()
{
	return name;
}

void Student::set_last_name(string student_last_name)
{
	last_name = student_last_name;
}

string Student::get_last_name()
{
	return last_name;
}

void Student::set_scores(int student_scores[])
{
	for (int i = 0; i < 5; ++i) {
		scores[i] = student_scores[i];
	}
}

void Student::set_average_score(double ball)
{
	average_score = ball;
}

double Student::get_average_score()
{
	return average_score;
}

Student::Student(string name, string last_name)
{
	Student::set_name(name);
	Student::set_last_name(last_name);
}

Student::~Student() //task5
{
	Student::save();
}

void Student::save()
{
	ofstream fout("students.txt", ios::app);
	fout << Student::get_name() << " "
		<< Student::get_last_name() << " ";
	for (int i = 0; i < 5; ++i) {
		fout << Student::scores[i] << " ";
	}
	fout << endl;
	fout.close();
}





