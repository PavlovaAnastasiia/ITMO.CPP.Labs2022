#pragma once
#include <iostream>
#include <tuple>
#include <string>
using namespace std;

//class incorrectValue
//{
//public:
//	incorrectValue() : message("Unaccaptable value!") {}
//	void printMessage() const { cout << message << endl; }
//private:
//	string message;
//};

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

	double getSeconds() const
	{
		double s = m_hours*3600. + m_minutes*60. + m_seconds;
		return s;
	}

	Time& timeCorrection()
	{
		Time t;
		while (m_seconds < 0) {
			m_seconds += 60;
			m_minutes--;
		}
		while (m_minutes < 0) {
			m_minutes += 60;
			m_hours--;
		}
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
	//Time& doubleIntoTime(double m_seconds);

	Time(double d)
	{
		int i = (int)d;
		int f = (int)((d - i) * 100);
		int s = (int)((d - i - (double)f / 100) * 10000);
		timeCorrection();
		m_hours = i;
		m_minutes = f;
		m_seconds = s;
	}

	string StrTime() {
		string text =
			to_string(m_hours) + ":" +
			to_string(m_minutes) + ":" +
			to_string(m_seconds);
		return text;
	}

	Time(int hours, int minutes, int seconds)
	{
		set_m_hours(hours);
		set_m_minutes(minutes);
		set_m_seconds(seconds);
	}

	Time& addTime(const Time& t1) 
	{
		int hours = t1.m_hours + m_hours;
		int minutes = t1.m_minutes + m_minutes;
		int seconds = t1.m_seconds + m_seconds;
		Time t(hours, minutes, seconds);
		t.timeCorrection();
		//if (hours == 0 && minutes == 0 && seconds == 0)
			//throw incorrectValue();
		return t;
	}

	Time& operator+(Time& timeToAdd) 
	{
		return this->addTime(timeToAdd);
	}
	Time operator-(const Time& timeToAdd) 
	{
		return Time(this->m_hours - timeToAdd.m_hours, this->m_minutes 
			- timeToAdd.m_minutes, this->m_seconds - timeToAdd.m_seconds);
	}
	bool operator==(const Time& t)
	{
		return (m_hours == t.m_hours && m_minutes == t.m_minutes && m_seconds == t.m_seconds);
	}
	Time& operator+(const double valToAdd) 
	{
		return this->addTime(Time(valToAdd));
	}

private:
	int m_hours;
	int m_minutes;
	int m_seconds;
};

