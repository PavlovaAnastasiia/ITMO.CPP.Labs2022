#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"
using namespace std;

void  initVect(vector<human*>&);

int main()
{
	/*std::vector<int> scores;

	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student* stud = new student("Petrov", "Ivan", "Alekseevich", scores);
	std::cout << stud->get_full_name() << std::endl;
	std::cout << "Average score: " << stud->get_average_score() << std::endl;

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Sergeev", "Dmitry", "Sergeevich", teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "Number of working hours: " << tch->get_work_time() << std::endl;*/

	vector<human*> humans;
	initVect(humans);

	for (human* human : humans) {
		cout << human->printData() << endl;
	}

	return 0;
}

void initVect(vector<human*>& human) {
	human.push_back(new teacher("Sergeev", "Dmitry", "Sergeevich", 50));
	human.push_back(new student("Petrov", "Ivan", "Alekseevich", { 3,3,3,4,5,2 }));
	human.push_back(new student("Pavlova", "Sonya", "Aleksandrovna", { 5,5,5,4,5,5 }));
}