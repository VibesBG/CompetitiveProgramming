/*
Задача 7. (Упражнение 3.4 от книгата Състезателно програмиране група С (стр.48))
Имаме N бутилки наредени в линия. Знаем количеството течност във всяка от тях – цяло положително число. 
Напишете програма, която за време О(N) намира максималното количество течност, което можем да изпием, ако нямаме право да пием от две поредни бутилки. ( 1 точка)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cout << "N: ";
    cin >> N;

    vector<long long> a(N);
    cout << "Liquid amounts: ";
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    if (N == 1) {
        cout << "Maximum liquid: " << a[0] << endl;
        return 0;
    }
    long long prev2 = a[0];
    long long prev1 = max(a[0], a[1]);
    for (int i = 2; i < N; i++) {
        long long curr = max(prev1, prev2 + a[i]);
        prev2 = prev1;
        prev1 = curr;
    }
    cout << "Maximum liquid: " << prev1 << endl;
    return 0;
}