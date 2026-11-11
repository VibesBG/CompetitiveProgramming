/*
Задача 1. (Упражнение 10.3. от книгата Състезателно програмиране група С)

Дадени са n и k имена, представени като стрингове от латински букви. 
Напишете програма, която отпечатва всички начини, по които можем да изберем отбор от к души, всеки на отделен ред. 
Имената във всеки ред да са сортирани лексикографски. Всички редове да са сортирани лексикографски. 
Например за n=3, к=2 и имена Ivan, Ana, Galya програма трябва да изведе:

Ana Galya
Ana Ivan
Galya Ivan
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<string> names(n);
    for (int i = 0; i < n; i++)
        cin >> names[i];

    sort(names.begin(), names.end());

    vector<int> mask(n, 0);
    for (int i = n - k; i < n; i++)
        mask[i] = 1;

    do {
        for (int i = 0; i < n; i++)
            if (mask[i] == 1)
                cout << names[i] << " ";
        cout << endl;
    } while (next_permutation(mask.begin(), mask.end()));

    return 0;
}
