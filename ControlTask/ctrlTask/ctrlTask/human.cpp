#include "human.h"
Human::Human(string name, string last_name, string phone)
{
	Human::name = name;
	Human::last_name = last_name;
	Human::phone = phone;
};
void Human::setHuman(string name, string last_name, string phone)
{
	Human::name = name;
	Human::last_name = last_name;
	Human::phone = phone;
}
string Human::getHuman()
{
	ostringstream full_info;
	full_info << last_name << " "<< name << " - " << phone << endl;
	return full_info.str();
}
string Human::getFullName()
{
	ostringstream full_name;
	full_name << last_name << " "<< name << endl;
	return full_name.str();
}

