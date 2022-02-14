#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

//typedef tuple<string, int, double> Tuple; //task5
using Tuple = tuple<string, int, double>;

//void printTupleOfThree(tuple<string, int, double> t)
void printTupleOfThree(Tuple t)
{
	cout << "("
		<< get<0>(t) << ", "
		<< get<1>(t) << ", "
		<< get<2>(t) << ")" << endl;
}

Tuple funtup(string s, int a, double d)
{
	s.append("!");
	return make_tuple(s, a, d * 10);
}

int main()
{
	vector<string> v1 = { "one", "two", "three", "four", "five", "six" };
	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

	auto t0 = make_tuple(v1[0], v2[0], v3[0]);
	printTupleOfThree(t0);

	auto t1 = funtup(v1[1], v2[1], v3[1]);
	printTupleOfThree(t1);

	return 0;
}


