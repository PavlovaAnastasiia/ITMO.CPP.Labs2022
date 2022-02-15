#include <string>

using namespace std;

class Students
{
public:
	class ExScore
	{
	public:
		string origin;
		int iValue;

		ExScore(string s, int sc)
		{
			origin = s;
			iValue = sc;
		}
	};

	void set_name(string name);
	string get_name();
	void set_last_name(string last_name);
	string get_last_name();
	void set_scores(int student_scores[]);
	void set_average_score(double ball);
	double get_average_score();

private:
	int scores[5];
	double average_score;
	string name;
	string last_name;
};



