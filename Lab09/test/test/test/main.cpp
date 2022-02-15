#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

//void printTime()
//{
//	int hours;
//	int minutes;
//	int seconds;
//	cout << "For t1: " << endl;
//	cout << "Hours: ";
//	cin >> hours;
//	cout << "\nMinutes: ";
//	cin >> minutes;
//	cout << "\nSeconds: ";
//	cin >> seconds;
//}

int main()
{
	int hours;
	int minutes;
	int seconds;

	cout << "For t1: " << endl;
	cout << "Hours: ";
	cin >> hours;
	cout << "\nMinutes: ";
	cin >> minutes;
	cout << "\nSeconds: ";
	cin >> seconds;

	/*Time* t2 = new Time();
	t2->set_m_hours(hours);
	t2->set_m_minutes(minutes); //it works
	t2->set_m_seconds(seconds);

	cout << "Current time is " << t2->get_m_hours() << " hours " << t2->get_m_minutes() << " minutes "
		<< t2->get_m_seconds() << " seconds!" << endl;*/

	Time *t1 = new Time(hours, minutes, seconds);

	cout << "Current time is " << t1->get_m_hours() << " hours " << t1->get_m_minutes() << " minutes "
		<< t1->get_m_seconds() << " seconds!" << endl;

	cout << "\nFor t2: " << endl;

	cout << "Hours: ";
	cin >> hours;
	cout << "\nMinutes: ";
	cin >> minutes;
	cout << "\nSeconds: ";
	cin >> seconds;

	Time* t2 = new Time(hours, minutes, seconds);

	cout << "Current time is " << t2->get_m_hours() << " hours " << t2->get_m_minutes() << " minutes "
		<< t2->get_m_seconds() << " seconds!" << endl;

	/*Time t1(11, 70, 70);
	Time t2(1, 11, 30);*/

	
	cout << "\nTotal for t1+t2!" << endl;
	try
	{ 
		Time t = t.addTime(*t1, *t2); 
	}
	catch (incorrectValue err)
	{
		cout << "ERROR!!" << endl;
		err.printMessage();
		return 1;
	}

	Time t = t.addTime(*t1, *t2);

	cout << "Current time is " << t.get_m_hours() << " hours " << t.get_m_minutes() << " minutes "
		<< t.get_m_seconds() << " seconds!" << endl;

	return 0;
}


