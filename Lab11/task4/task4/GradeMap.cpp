#include "GradeMap.h"

char& GradeMap::operator[](const string& name)
{
	for (auto& ref : m_map)
	{
		if (ref.name == name)
			return ref.grade;
	}
	StudentGrade temp{ name, ' ' };
	m_map.push_back(temp);
	return m_map.back().grade;
}