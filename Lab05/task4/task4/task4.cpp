#include <iostream>

using namespace std;

int main()
{
    const int N = 10;
    int myArray[N];

    for (int i = 0; i < N; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> myArray[i];
    }

    int min = 0; // min value
    int buf = 0; // switch values

    for (int i = 0; i < N; i++)
    {
        min = i; // the number of the current cell, as the cell with the minimum value
        // in the loop, we will find the real cell number with the minimum value
        for (int j = i + 1; j < N; j++)
            min = (myArray[j] < myArray[min]) ? j : min;
        // rearranging this element by swapping it with the current one
        if (i != min)
        {
            buf = myArray[i];
            myArray[i] = myArray[min];
            myArray[min] = buf;
        }
    }
    for (int i : myArray)
        cout << i << '\t';
}



