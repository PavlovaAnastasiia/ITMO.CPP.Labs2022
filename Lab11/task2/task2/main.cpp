#include <iostream>
#include "Distance.h"

using namespace std;

int main()
{
	Distance dist1 = 2.35F;
	cout << "\ndist1 = " << dist1;
	float mtrs;
	mtrs = static_cast<float>(dist1);
	mtrs = dist1;
	cout << "\nmtrs = " << mtrs;
}


