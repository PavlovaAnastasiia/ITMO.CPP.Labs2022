#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//srand(time(NULL));
	int a, b, c;
	int k = 0;
	const int n = 10;
	int mas[n];
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < n;i++)
	{
		cout << "Please, enter values a and b for " << i + 1 << " statement: " << endl;
		cin >> a >> b;
		cout << "Please, enter value a*b for " << i + 1 << " statement: " << endl; 
		cin >> c;
		mas[i] = c;

		if (a * b != c)
		{
			v2.push_back(c);
			k++;
		}
		else
		{
			v1.push_back(c);
		}
	}

	cout << "\nAll: ";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << ends;
	}

	cout << "\nGood: ";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << ends;
	}

	cout << "\nBad: ";
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << ends;
	}
}

