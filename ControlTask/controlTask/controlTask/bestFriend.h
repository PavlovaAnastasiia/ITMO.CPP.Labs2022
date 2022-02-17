#pragma once
#include "human.h"

class BestFriend : public Human
{
public:
	BestFriend();
	BestFriend(string name, string last_name, string phone, char status, string birth_date) :
		Human(name, last_name, phone, status)
	{
		set_birth_date(birth_date);
	}

	void set_birth_date(string birth_date)
	{
		birth_date = birth_date;
	}
	string get_birth_date()
	{
		return birth_date;
	}
	static Human* createBFriend(string name, string last_name, string phone, char status, string birth_date)
	{
		return new BestFriend(name, last_name, phone, status, birth_date);
	}
	char getStatus() override;

private:
	string birth_date;
};


