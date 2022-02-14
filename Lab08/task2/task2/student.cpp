#include <iostream>
#include <string>
#include "student.h"

void Students::set_name(string student_name)
{
	name = student_name;
}

string Students::get_name()
{
	return name;
}

void Students::set_last_name(string student_last_name)
{
	last_name = student_last_name;
}

string Students::get_last_name()
{
	return last_name;
}

void Students::set_scores(int student_scores[])
{
	for (int i = 0; i < 5; ++i) {
		scores[i] = student_scores[i];
	}
}

void Students::set_average_score(double ball)
{
	average_score = ball;
}

double Students::get_average_score()
{
	return average_score;
}
