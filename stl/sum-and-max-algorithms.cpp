/*
Задача 2: Сума и максимален елемент. Даден е масив от цели числа. 
Намерете общата сума на елементите и стойността на най-големия елемент. 
Алгоритми:accumulate, max_element
*/

#include <iostream>
#include <vector>
#include <numeric>   // accumulate
#include <algorithm> // max_element

using namespace std;

int main()
{
    vector<int> arr = { 3, -5, 11, 2, 1, -1 };

    int sum = accumulate(arr.begin(), arr.end(), 0);

    int maxValue = *max_element(arr.begin(), arr.end());

    cout << "Sum = " << sum << endl;
    cout << "Max = " << maxValue << endl;

    return 0;
}
