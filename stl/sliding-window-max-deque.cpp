/*
Задача 1. Максимални елементи във всички подмасиви с размер K:  Даден е масив от цели числа и  естествено число K. 
Напишете програма, която извежда максималния елемент във всеки подмасив с  размер K.  
Използвайте deque за да поддържате индексите на потенциалните максимални елементи.   
Премахнете старите и добавете новите елементи при преминаването през масива.
*/

#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    deque<int> dq;

    for (int i = 0; i < k; i++) 
    {
        while (!dq.empty() && arr[dq.back()] <= arr[i])
            dq.pop_back();

        dq.push_back(i);
    }

    for (int i = k; i < n; i++) 
    {
        cout << arr[dq.front()] << " ";

        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        while (!dq.empty() && arr[dq.back()] <= arr[i])
            dq.pop_back();

        dq.push_back(i);
    }

    cout << arr[dq.front()] << endl;

    return 0;
}
