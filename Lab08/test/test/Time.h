#pragma once
#include <iostream>
using namespace std;

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

private:
	int m_hours;
	int m_minutes;
	int m_seconds;
};

