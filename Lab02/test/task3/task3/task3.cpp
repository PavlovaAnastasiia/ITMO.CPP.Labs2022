// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	cout << "Please enter the amount of money!";
	int coin;
	cin >> coin;
	int ten = 0; int five = 0; int two = 0; int one = 0;

	while(coin > 0){
		
	if (coin >= 10)
		{
			ten++;
			coin = coin - 10;
		}
		else if (coin >= 5)
		{
			five++;
			coin = coin - 5;
		}
		else if (coin >= 2)
		{
			two++;
			coin = coin - 2;
		}
		else if (coin >= 1)
		{
			one++;
			coin = coin - 1;
		}
	}
	cout << "Change is \n" << ten << " times 10 rubles, \n" << five << " times 5 rubles, \n" <<
		two << " times 2 rubles, \n" << one << " times 1 ruble.";
}

