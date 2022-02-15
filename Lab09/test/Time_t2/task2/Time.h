#pragma once
#include <iostream>
using namespace std;

class incorrectValue
{
public:
	incorrectValue (): message ("Unaccaptable value!") {}
	void printMessage() const { cout << message << endl; }
private:
	string message;
};

class Time
{
public:

	void set_m_hours(int hours)
	{
		m_hours = hours;
	}
	void set_m_minutes(int minutes)
	{
		m_minutes = minutes;
	}
	void set_m_seconds(int seconds)
	{
		m_seconds = seconds;
	}
	int get_m_hours()
	{
		return m_hours;
	}
	int get_m_minutes()
	{
		timeCorrection();
		return m_minutes;
	}
	int get_m_seconds()
	{
		timeCorrection();
		return m_seconds;
	}

	Time()
	{
		m_hours = 0;
		m_minutes = 0;
		m_seconds = 0;
	}

	Time& timeCorrection() 
	{
		Time t;
		while (m_seconds > 59) {
			m_seconds -= 60;
			m_minutes++;
		}
		while (m_minutes > 59) {
			m_minutes -= 60;
			m_hours++;
		}
		return t;
	}

	Time(int hours, int minutes, int seconds)
	{
		set_m_hours(hours);
		set_m_minutes(minutes);
		set_m_seconds(seconds);
	}

	Time& addTime(Time t1, Time t2)
	{
		int hours = t1.m_hours + t2.m_hours;
		int minutes = t1.m_minutes + t2.m_minutes;
		int seconds = t1.m_seconds + t2.m_seconds;
		Time t(hours, minutes, seconds);
		
		if (hours == 0 && minutes == 0 && seconds == 0)
			throw incorrectValue();

		return t;
	}

	/*Time& printTime()
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

		Time t(hours, minutes, seconds);

		return t;
	}*/

private:
	int m_hours;
	int m_minutes;
	int m_seconds;
};

