#include <iostream>

using namespace std;

struct solutionsOfEquation
{
    double x1;
    double x2;

	void findX1X2(int a, int b, int c)
	{
		double D = pow(b, 2) - 4 * a * c;
		if (D > 0)
		{
			x1 = ((-1) * b + sqrt(D)) / (2 * a);
			x2 = ((-1) * b - sqrt(D)) / (2 * a);;
		}
		else if (D == 0)
		{
			x1 = (-1) * b / (2 * a);
			x2 = x1;
		}
		else
			cout << "Error! Try again." << endl;
	}
};

//void printABC()
//{
//    int a, b, c;
//    cout << "Please, enter values of a,b,c for quadratic equation (ax^2+bx+c)!\n";
//    cin >> a >> b >> c;
//}

solutionsOfEquation valuesRoot(int a, int b, int c)
{
    solutionsOfEquation s;
	s.findX1X2(a, b, c);
	return s;
}

int main()
{
	int a, b, c;
	cout << "Please, enter values of a,b,c for quadratic equation (ax^2+bx+c)!\n";
	cin >> a >> b >> c;
	solutionsOfEquation s = valuesRoot(a, b, c);
	cout << "The result is: x1 = " << s.x1 << " x2 = " << s.x2;

}


