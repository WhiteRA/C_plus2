﻿#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<float> prices{ 2.5, 4.25, 3.0, 10.0 };
    vector<int> items{ 1, 1, 0, 3 };
    float i = 0;
    for (int num : items)
    {
        i += prices[num];
    }
    cout << i << " ";
    std::cout << typeid(i).name() << std::endl;
}