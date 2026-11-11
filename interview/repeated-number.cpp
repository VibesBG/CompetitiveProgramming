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
    int n;
    cin >> n;

    int sum = 0;
    int x;

    for (int i = 0; i < n; i++) 
    {
        cin >> x;
        sum += x;
    }

    int expected = (n - 1) * n / 2;

    cout << sum - expected;
}
