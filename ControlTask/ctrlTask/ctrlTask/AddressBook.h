#pragma once

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

private:

};

