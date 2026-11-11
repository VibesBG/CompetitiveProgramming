/*
Задача 2. Решете задача 1, без да използвате масив (Упражнение 3.1 от книгата Състезателно програмиране група С (стр.46)). 
Използвайте map. ( 1 точка)
*/

#include <iostream>
#include <map>

using namespace std;

map<int, int> dp;
int f(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    if (dp.find(n) != dp.end()) return dp[n];
    int result = f(n - 1) + f(n - 2);
    dp[n] = result;
    return result;
}

int main()
{
    int N;
    cout << "2xN matrix" << endl << "N: ";
    cin >> N;

    cout << f(N);
}