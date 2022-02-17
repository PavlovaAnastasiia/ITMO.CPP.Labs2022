#pragma once
#include <string>
#include <iostream>
#include <map>
#include "student.h"
#include "bestFriend.h"

using namespace std;

class incorrectValue
{
public:
	incorrectValue() : message("ERROR! You entered a wrong number. Please, try again") {}
	void printMessage() const { cout << message << endl; }
private:
	string message;
};

class AddressBook
{
public:
	unsigned int mainMenu();
	void selectAction(unsigned int flag);

	void addHuman(Human* status)
	{
		string key = status->getHuman();
		book.insert(make_pair(key, status));
	}

	void enterInfo(char status)
	{
		string name;
		string last_name;
		string phone;

		if (status == 'S')
		{
			string institution;
			cout << "Please enter name, last name, phone number and institution for student:\n";
			cin >> name >> last_name >> phone >> institution;
			addHuman(Student::createStudent(name, last_name, phone, status, institution));
		}
		if (status == 'B')
		{
			string birth_date;
			cout << "Please enter name, last name, phone number and birthday for best friend:\n";
			cin >> name >> last_name >> phone >> birth_date;
			addHuman(BestFriend::createBFriend(name, last_name, phone, status, birth_date));
		}
	}

private:
	map<string, Human*> book;
	map<string, Human*>::iterator bookIter;
	string pathF;
	string pathC;
};

