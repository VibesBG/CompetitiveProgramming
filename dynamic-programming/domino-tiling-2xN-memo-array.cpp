/*
Задача 1. (Задача 3.1 от книгата Състезателно програмиране група С (стр.43))
Дадена е правоъгълна таблица с размери 2хN.
Напишете програма, която намира по колко начина можем да покрием таблицата с плочки за домино.
- Решете задача с използване на глобален масив ( 0.5 точка) 
*/

#include <iostream>
#include <cstdint>

using namespace std;

int dp[INT16_MAX + 1];

int f(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    if (dp[n] != 0) return dp[n];
    int result = f(n - 1) + f(n - 2);
    dp[n] = result;
    return result;
}

int main()
{
    int N;
    cout << "2xN matrix" << endl << "N: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        f(i);
    }

    cout << f(N) << endl;
}