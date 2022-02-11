#include <iostream>

using namespace std;

int main()
{
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    int min = 0; // min value
    int buf = 0; // switch values

    for (int i = 0; i < N; i++)
    {
        min = i; // the number of the current cell, as the cell with the minimum value
        // in the loop, we will find the real cell number with the minimum value
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        // rearranging this element by swapping it with the current one
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    for (int i : a)
        cout << i << '\t';
}

