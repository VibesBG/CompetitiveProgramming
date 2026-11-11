/*
Задача 6. (Задача 3.3 от книгата Състезателно програмиране група С (стр.47)) ( 1 точка)
Дадена е редица a0, a1, …, aN-1 от цели числа. 
Напишете програма, която за време О(N) намира максималната сума на последователност от поредни числа сред дадените. 
Последователността трябва да съдържа поне един елемент.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cout << "N: ";
    if (!(cin >> N)) {
        cout << "Invalid input for N." << endl;
        return 1;
    }

    if (N <= 0) {
        cout << "N must be positive." << endl;
        return 1;
    }

	vector<long long> a(N);

    cout << "Elements: ";
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    long long currentMax = a[0];
    long long globalMax = a[0]; 
    for (int i = 1; i < N; i++) {
        currentMax = max(a[i], currentMax + a[i]);
        globalMax = max(globalMax, currentMax);
    }
    cout << "Maximum sum of consecutive elements: " << globalMax << endl;
    return 0;
}