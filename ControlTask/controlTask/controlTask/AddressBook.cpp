#include "AddressBook.h"
#include "human.h"
#include "student.h"

unsigned int AddressBook::mainMenu()
{
	unsigned int flag = 0;
	cout << "Please, select an action:\n"
		<< "\t1. Enter information about the person\n"
		<< "\t2. Save information to directory\n"
		<< "\t3. Show information" << endl;
	cin >> flag;
	if (flag < 1 || flag > 3)
		throw incorrectValue();
	return flag;
}

void AddressBook::selectAction(unsigned int flag)
{
	switch (flag)
	{
	case 1:
		char status;
		cout << "Do you want to enter information about student(S) or your best friend(B)?";
		cin >> status;
		enterInfo(status);
		break;
	case 2:
		//addPerson(f);
		break;
	case 3:
		//saveBook();
		break;
	default:
		cout << "Something went wrong..." << endl;
		break;
	}

}
