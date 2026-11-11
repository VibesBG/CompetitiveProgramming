#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int MAXN = 1001;
    vector<vector<long long>> dp(MAXN, vector<long long>(MAXN, 0));
    for (int i = 0; i < MAXN; i++) dp[i][0] = 1;
    for (int i = 1; i < MAXN; i++)
        for (int j = 1; j < MAXN; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= i) dp[i][j] += dp[i][j - i];
        }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n][n] << "\n";
    }
}