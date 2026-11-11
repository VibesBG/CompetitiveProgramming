#include <iostream>

using namespace std;

int main()
{
    int N;
    if (!(cin >> N)) return 0;

    int expectedSum = N * (N + 1) / 2;
    int sum = 0;

    for (int i = 0; i < N - 1; ++i) 
    {
        int x; cin >> x;
        sum += x;
    }

    cout << (expectedSum - sum);
    return 0;
}
