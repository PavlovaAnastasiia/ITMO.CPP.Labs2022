#include <iostream>
#include <string>
#include "student.h"

using namespace std;

//int main() //task2&3
//{
//	Student* student02 = new Student; //task3
//	//Student student01;
//	string name;
//	string last_name;
//
//	cout << "Name: ";
//	getline(cin, name);
//	cout << "Last name: ";
//	getline(cin, last_name);
//
//	/*student01.set_name(name);
//	student01.set_last_name(last_name);*/
//
//	student02->set_name(name);
//	student02->set_last_name(last_name);
//
//	int scores[5];
//	int sum = 0;
//	for (int i = 0; i < 5; ++i) {
//		cout << "Score " << i + 1 << ": ";
//		cin >> scores[i];
//		sum += scores[i];
//	}
//
//	//student01.set_scores(scores);
//	student02->set_scores(scores);
//
//	double average_score = sum / 5.0;
//	//student01.set_average_score(average_score);
//	student02->set_average_score(average_score);
//
//	//cout << "Average ball for " << student01.get_name() << " "
//	//	<< student01.get_last_name() << " is "
//	//	<< student01.get_average_score() << endl;
//
//	cout << "Average ball for " << student02->get_name() << " "
//		<< student02->get_last_name() << " is "
//		<< student02->get_average_score() << endl;
//
//	delete student02;
//	return 0;
//}

int main() //task4
{
	string name;
	string last_name;

	cout << "Name: ";
	getline(cin, name);
	cout << "Last name: ";
	getline(cin, last_name);

	Student* student02 = new Student(name, last_name);

	int scores[5];
	int sum = 0;
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}

	student02->set_scores(scores);

	double average_score = sum / 5.0;

	student02->set_average_score(average_score);

	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;

	delete student02;
	return 0;
}

