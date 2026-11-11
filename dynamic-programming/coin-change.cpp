#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> d(k);
        for (int i = 0; i < k; i++) cin >> d[i];
        int n;
        cin >> n;
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int j = 1; j <= n; j++)
            for (int i = 0; i < k; i++)
                if (d[i] <= j && dp[j - d[i]] != INT_MAX)
                    dp[j] = min(dp[j], dp[j - d[i]] + 1);
        cout << (dp[n] == INT_MAX ? -1 : dp[n]) << "\n";
    }
}