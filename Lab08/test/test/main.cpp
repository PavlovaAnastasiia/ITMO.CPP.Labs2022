#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

int main()
{
	int hours;
	int minutes;
	int seconds;

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
}


