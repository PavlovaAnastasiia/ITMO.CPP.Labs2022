#pragma once
#include <string>		
using namespace std;

class Student
	{
	public:
		void save(); //task5
		~Student();
		Student(string, string){};

		void set_name(string student_name);
		string get_name();
		void set_last_name(string student_last_name);
		string get_last_name();
		void set_scores(int student_scores[]);
		void set_average_score(double ball);
		double get_average_score();

	private:
		int scores[5];
		double average_score;
		string name;
		string last_name;
	};

