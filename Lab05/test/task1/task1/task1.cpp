#include <iostream>

using namespace std;

void fillArr(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}

void printArr(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

void arraySum(int arr[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	cout << "Sum = " << s;
}

void main()
{
	const int n = 10;
	int array[n];
	int x = sizeof(array);

	fillArr(array, n);
	printArr(array, n);
	arraySum(array, n);

	cout << "\nArray size is: " << sizeof(array) << " bytes" << endl;
}

