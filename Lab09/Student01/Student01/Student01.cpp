#include <iostream>
#include "Student.h"
#include "task2.h"

using namespace std;

void Students::set_name(string student_name)
{
    name = student_name;
}

string Students::get_name()
{
    return name;
}

void Students::set_last_name(string student_last_name)
{
    last_name = student_last_name;
}

string Students::get_last_name()
{
    return last_name;
}

void Students::set_scores(int student_scores[])
{
    for (int i = 0; i < 5; ++i) {
        scores[i] = student_scores[i];
    }
}

void Students::set_average_score(double ball)
{
    average_score = ball;
}

double Students::get_average_score()
{
    return average_score;
}

int main()
{
    Student student01;
    string name;
    string last_name;
    int scores[5];

    cout << "Name: ";
    getline(cin, name);

    cout << "Last name: ";
    getline(cin, last_name);

    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    student01.set_name(name);
    student01.set_last_name(last_name);
    try
    {
        student01.set_scores(scores);
    }
    catch (Students::ExScore& ex)
    {
        cout << "\nERROR " << ex.origin;
        cout << "\nEntered value " << ex.iValue <<
            " is forbidden\n";
    }


    double average_score = sum / 5.0;
    student01.set_average_score(average_score);

    cout << "Average ball for " << student01.get_name() << " "
        << student01.get_last_name() << " is "
        << student01.get_average_score() << endl;
    return 0;
}



