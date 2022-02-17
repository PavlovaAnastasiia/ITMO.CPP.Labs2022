#include "AddressBook.h"

unsigned int AddressBook::mainMenu()
{
	unsigned int flag = 0;
		cout << "Please, select an action:\n"
			<< "\t1. Enter information about the person\n"
			<< "\t2. Save information about the person\n"
			<< "\t3. Save information to directory\n"
			<< "\t4. Show information" << endl;
		cin >> flag;
		if (flag < 1 || flag > 4)
		throw incorrectValue();
	return flag;
}

void AddressBook::selectAction(unsigned int flag)
{
	switch (flag)
	{
	case 1:
		//showAll();
		break;
	case 2:
		char status;
		cout << "Do you want to enter information about student(S) or your best friend(B)?";
		cin >> status;
		//addPerson(f);
		break;
	case 3:
		//saveBook();
		break;
	case 4:
		//loadBook();
		break;
	default:
		cout << "Îøèáêà, íàæìèòå Enter äëÿ âîçâðàòà â ãëàâíîå ìåíþ." << endl;
		cin;
		break;
	}

	void Addressbook::addPerson(char status)
	{
		string name;
		string last_name;
		string phone;

		if (status == 'S')
		{
			string institution;
			cout << "Ââåäèòå èìÿ, ôàìèëèþ, íîìåð òåëåôîíà è ïðîçâèùå ÷åðåç ïðîáåë:\n";
			cin >> name >> lastName >> phone >> nickName;
			addPerson(createPerson(name, lastName, phone, nickName));
		}
		else
		{
			string position;
			string department;
			string organization;
			cout << "Ââåäèòå èìÿ, ôàìèëèþ, íîìåð òåëåôîíà, äîëæíîñòü, îòäåë è îðãàíèçàöèþ ÷åðåç ïðîáåë:\n";
			cin >> name >> lastName >> phone >> position >> department >> organization;
			addPerson(createPerson(name, lastName, phone, position, department, organization));
		}
	}
}