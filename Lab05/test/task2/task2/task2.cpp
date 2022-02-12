#include <iostream>

using namespace std;

int* max_vect(const int, int*, int*);

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 2};
    int b[] = { 7, 6, 5, 4, 3, 2, 1, 3};

    int kc = sizeof(a) / sizeof(a[0]); //Number of array elements
    int* c; //Pointer to the resulting array
    c = max_vect(kc, a, b); //calling a function to create an array

    for (int i = 0;i < kc; i++) //output of the result
        cout << c[i] << " ";
    cout << endl;
    delete[]c; //memory return
}

int* max_vect(const int size, int* arr1, int* arr2)
{
    int* res = new int[size];
    for (int i = 0; i < size; i++) 
    {
        res[i] = arr1[i] > arr2[i] ? arr1[i] : arr2[i];
    }
    return res;
}

