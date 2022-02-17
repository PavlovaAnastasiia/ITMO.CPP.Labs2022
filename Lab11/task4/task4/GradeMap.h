#pragma once
#include "task4.cpp"

class GradeMap
{
private:
	vector<StudentGrade> m_map;
public:
	GradeMap()
	{ }
	char& operator[](const string& name);
};
