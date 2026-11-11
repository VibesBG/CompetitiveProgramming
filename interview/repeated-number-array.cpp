/*
Задачи давани при кандидатстване за работа

Задача 1. Точно едно повтарящо се число
Дадени са N последователни естествени числа между 1 и N -1 включително.
Точно едно от тях се повтаря. Намерете кое е то?
*/

#include <iostream>

using namespace std;

int main()
{
    const int arraySize = 100;

    int numbers[arraySize];

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    int expected = (n - 1) * n / 2;

    cout << sum - expected;
}