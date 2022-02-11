#include <iostream>

using namespace std;

int Myroot(double, double, double, double&, double&);

void valuesRoot()
{
	double a, b, c;
	cout << "Plese, enter values of a,b,c for quadratic equation (ax^2+bx+c)!\n";
	cin >> a >> b >> c;

	double x1, x2;
	int res = Myroot(a, b, c, x1, x2);

	switch (res)
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

int main()
{
	valuesRoot();
}

int Myroot(double a, double b, double c, double& x1, double& x2)
{
	double D = pow(b,2) - 4 * a * c;
	if (D > 0)
	{
		x1 = ((-1) * b + sqrt(D)) / (2 * a);
		x2 = ((-1) * b - sqrt(D)) / (2 * a);;
		return 1;
	}
	else if (D == 0)
	{
		x1 = (-1) * b / (2 * a);
		x2 = x1;
		return 0;
	}
	else
		return -1;
}

