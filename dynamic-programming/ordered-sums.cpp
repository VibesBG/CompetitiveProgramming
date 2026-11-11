/*
Задача 5. (Упражнение 3.3 от книгата Състезателно програмиране група С (стр.47)) 
Напишете  програма, която по дадено N намира за време О(N2) броя на
представянията на N като сума от цели положителни числа и подредбата на събираемите е от значение. ( 1 точка)
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cout << "N: ";
    if (!(cin >> N)) return 0;
    if (N < 0) {
        cerr << "N must be non-negative\n";
        return 1;
    }

    vector<long long> ways(N + 1);
    ways[0] = 1;

    for (int i = 1; i <= N; i++) {
        ways[i] = 0;
        for (int k = 1; k <= i; k++) {
            ways[i] += ways[i - k];
        }
    }

    cout << "Number of representations of " << N << " as an ordered sum: " << ways[N] << endl;

    return 0;
}