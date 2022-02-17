#pragma once
#include "human.h"

class BestFriend : public Human
{
public:
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

private:
	string birth_date;
};

