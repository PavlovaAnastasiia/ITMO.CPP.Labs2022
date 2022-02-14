#include <iostream>

using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

Time inputTime()
{
    Time t;
    cout << "Enter number of hours: " << endl;
    cin >> t.hours;
    cout << "Enter number of minutes: " << endl;
    cin >> t.minutes;
    cout << "Enter number of seconds: " << endl;
    cin >> t.seconds;

    while (t.hours > 0)
    {
        if (t.hours > 0)
        {
            t.seconds += 3600;
            t.hours--;
        }
    }

    while (t.minutes > 0)
    {
        t.seconds += 60;
        t.minutes--;
    }

    return t;
}

//Time convertTime()
//{
//    while (t.hours > 0)
//    {
//        if (t.hours > 0)
//        {
//            t.seconds += 3600;
//            t.hours--;
//        }
//    }
//
//    while (t.minutes > 0)
//    {
//            t.seconds += 60;
//            t.minutes--;
//    }
//
//    return t;
//}

void showTime(Time t)
{
    cout << "Current time is " << t.hours << " hours " << t.minutes 
        << " minutes " << t.seconds << " seconds!" << endl; 
}

void showTimeInSec(Time t)
{
    //convertTime();
    cout << "Current in seconds time is " << t.seconds << endl;
}

int main()
{
    Time t1 = inputTime();
    showTime(t1);
    showTimeInSec(t1);
}


