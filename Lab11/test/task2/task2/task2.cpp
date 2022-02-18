#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include "Point.h"
using namespace std;

int main()
{
    vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));
    sort(v.begin(), v.end()); 
    for (auto& point : v)
        cout << point << '\n'; 
    return 0;
}


