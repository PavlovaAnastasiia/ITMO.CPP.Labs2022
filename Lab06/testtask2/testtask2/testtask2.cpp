#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int* randomizer(const int);
void SortArray(const int, int*);
bool WriteToFile(const int, int*, string);

int main()
{
	const int size = 10;
	int* array = randomizer(size);
	WriteToFile(size, array, "SimpleArray.txt");

	SortArray(size, array);
	WriteToFile(size, array, "SortedArray.txt");
}

int* randomizer(const int size)
{
	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 10;
	}
	return arr;
}

void SortArray(const int size, int* a)
{
	int min = 0; 
	int buf = 0; 

	for (int i = 0; i < size; i++)
	{
		min = i; 
		for (int j = i + 1; j < size; j++)
			min = (a[j] < a[min]) ? j : min;
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
}

bool WriteToFile(const int size, int* arr, string nameFile = "ArrFile.txt") 
{
	ofstream out(nameFile);
	if (!out)
	{
		cout << "Unable to open file!\n";
		return false;
	}
	if (out.is_open())
	{
		for (int i = 0; i < size; i++) {
			out << arr[i] << endl;
		}
	}
	out.close();
	return true;
}


