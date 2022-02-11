#include <iostream>

using namespace std;

bool Input(int a, int b)
{
    if ((a <= 0) || (b <= 0)) return false;
    else return true;
}

int main()
{
    int a, b;
    cout << "Please, enter 2 values!" << endl;
    cin >> a >> b;

    if (Input(a, b) == false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    cout << "s =  " << s;
    return 0;
}



