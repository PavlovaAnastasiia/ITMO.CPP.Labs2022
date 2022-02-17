#include "human.h"
Human::Human(string name, string last_name, string phone, char status)
{
	Human::name = name;
	Human::last_name = last_name;
	Human::phone = phone;
	Human::status = status;
};
void Human::setHuman(string name, string last_name, string phone, char status)
{
	Human::name = name;
	Human::last_name = last_name;
	Human::phone = phone;
	Human::status = status;
}
string Human::getHuman()
{
	ostringstream full_info;
	full_info << last_name << " "<< name << " (" << status << ")" <<" - " << phone << endl;
	return full_info.str();
}
string Human::getFullName()
{
	ostringstream full_name;
	full_name << last_name << " "<< name << endl;
	return full_name.str();
}

