#include <iostream>
#include <tuple>

using namespace std;

tuple<int, double, double> findRoot(double a, double b, double c)
{
	double x1 = 0; 
	double x2 = 0;
	double D = b * b - 4 * a * c;

	int flag = 0;

	if (D > 0)
	{
		x1 = ((-1) * b + sqrt(D)) / (2 * a);
		x2 = ((-1) * b - sqrt(D)) / (2 * a);
		flag = 1;
	}
	else if (D == 0)
	{
		x1 = (-1) * b / (2 * a);
		x2 = x1;
		flag = 0;
	}
	else {
		flag = -1;
		x2 = x1 = 0.0;
	}
	return make_tuple(flag, x1, x2);
}

int main()
{
	int a, b, c;
	cout << "Please, enter values of a,b,c for quadratic equation (ax^2+bx+c)!\n";
	cin >> a >> b >> c;
	double	x1, x2; 
	int flag;

	tie(flag, x1, x2) = findRoot(a, b, c);
	switch (flag)
	{
	case 1:
		cout << "The results are x1 = " << x1 << ", x2 = " << x2 << endl;
		break;
	case 0:
		cout << "You have got only one solution: x = " << x1 << endl;
		break;
	case (-1):
		cout << "Equation does not have a solution! :(";
		break;
	}
}

