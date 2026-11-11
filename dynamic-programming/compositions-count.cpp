#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N == 0) {
        cout << 0;
        return 0;
    }

    long long dp[1001] = { 0 };
    dp[0] = 1;

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= i; j++)
            dp[i] += dp[i - j];

    cout << dp[N];
}

