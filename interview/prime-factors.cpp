/*
 Да се напише програма, която извежда като редица простите делители на дадено число.

Вход – 24

Изход -2223

Обяснение: 24 = 23 * 31
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 2;

    if (n < 0)
    {
        n *= -1;
        cout << "- ";
    }


    while (n > 1)
    {
        if (n % i == 0)
        {
            n = n / i;
            cout << i << " ";
        }
        else
            i++;
            continue;
    }
}

