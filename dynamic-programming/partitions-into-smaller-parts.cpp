#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;

    for (int k = 1; k < n; k++)
        for (int i = k; i <= n; i++)
            dp[i] += dp[i - k];

    cout << dp[n] << endl;
    return 0;
}