#include <iostream>
#include <string>
#include "Time.h"
#include "Time.cpp"
using namespace std;

int main()
{
	Time t1(11, 70, 70);
	Time t2(1, 11, 30);

	Time t = t1 + t2;
	cout << "\nTotal for t1+t2 = "<< t.StrTime() << endl;
	Time t3 = t1 - t2;
	cout << "\nTotal for t1+t2 = " << t3.StrTime() << endl;

	Time t5(11, 70, 70);
	Time s = t5 + 100.;
	cout << "\nTotal for t5 + 100 = " << s.StrTime() << endl;

	/*double s = t1.getSeconds();
	double sec = s + 555.;
	Time t4;
	t4.Time::doubleIntoTime(sec);
	cout << "\nTotal for t1+555 = " << t4.StrTime() << endl;*/
}

