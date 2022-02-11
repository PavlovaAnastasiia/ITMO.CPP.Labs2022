#include <iostream>

using namespace std;

int main()
{
    const int n = 3;
    int mas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    cout << "Sum = " << s;

    int a = 0;
    for (int i = 0; i < n; i++)
    {
        
        if (mas[i] < 0)
        {
            //cout << mas[i] << endl;
             a += mas[i];
        } 
    }
    cout << "\nSum of the negative numbers = " << a;

    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
        {
            p += mas[i];
        }
    }
    cout << "\nSum of the positive numbers = " << p;

    int s1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i%2 == 0)
        {
            s1 += mas[i];
        }
    }
    cout << "\nSum of the numbers with even index = " << s1;

    int s2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            s2 += mas[i];
        }
    }
    cout << "\nSum of the numbers with uneven index = " << s2;
}

