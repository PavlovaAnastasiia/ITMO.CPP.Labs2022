#include "AddressBook.h"
#include "human.h"
#include "student.h"


unsigned int AddressBook::mainMenu()
{
	unsigned int flag;
	cout << "Please, select an action:\n"
		<< "\t1. Enter information about the person\n"
		<< "\t2. Save information to directory\n" << endl;
		//<< "\t3. Show information" 
	cin >> flag;
	if (flag < 1 || flag > 2)
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
		saveBook();
		break;
	/*case 3:
		showInfo()
		break;*/
	default:
		cout << "Something went wrong..." << endl;
		break;
	}
}

void AddressBook::saveBook()
{
	std::ofstream foutB;
	std::ofstream foutS;
	foutB.open(pathB);
	foutS.open(pathS);
	if (!foutB)
	{
		cout << "Unable to open file";
	}
	if(foutB.is_open())
	{
		for (auto f : book)
		{
			if (f.second->getStatus() == 'B')
				foutB.write((char*)f.second, sizeof(BestFriend));
			else if (f.second->getStatus() == 'S')
				foutS.write((char*)f.second, sizeof(Student));
			else
				continue;
		}
	}
	foutB.close();
	foutS.close();
}
