#include <iostream>
#include <string>

using namespace std;

class DivideByZeroError
{
public:
DivideByZeroError() : message("Division by zero!") { }
void printMessage() const 
{ 
    cout << message << endl; 
}
private:
    string message;
};

float quotient(int numl, int num2)
{
    if (num2 == 0)
        throw DivideByZeroError();
    return (float)numl / num2;
}

int main()
{
    cout << "Please, enter 2 numbers for division:\n";
    int number1, number2;
    cin >> number1;
    cin >> number2;

    for (int i = -10; i < 10; i++) //task2
    {
        try
        {
            //float result = quotient(number1, number2);
            float result = quotient(number1, i);
            cout << "The result is " << result << endl;
        }
        catch (DivideByZeroError& error)
        {
            cout << "ERROR: ";
            error.printMessage();
            return 1;
        }
        return 0;
    }
}


