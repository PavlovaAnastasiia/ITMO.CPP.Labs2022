#include <iostream>
#include "student.h"
#include "IdCard.h"
#include <string>

using namespace std;

int main()
{
	IdCard* idc = new IdCard(123, "Basic");
	string name;
	string last_name;
	
	Student* student02 = new Student(name, last_name, idc);
	//Student* student02 = new Student;
	cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
	cout << "Category: " << student02->getIdCard().getCategory() << endl;
	
	cout << "Name: ";
	getline(std::cin, name);
	cout << "Last name: ";
	getline(std::cin, last_name);

	int scores[5];
	int sum = 0;

	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}
	student02->set_name(name);
	student02->set_last_name(last_name);
	student02->set_scores(scores);

	float average_score = sum / 5.0;
	student02->set_average_score(average_score);

	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	delete student02;

	return 0;
}

