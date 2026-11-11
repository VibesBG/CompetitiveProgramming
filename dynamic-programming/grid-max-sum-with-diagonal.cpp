#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>>       A(n, vector<int>(m));
    vector<vector<long long>> dp(n, vector<long long>(m, LLONG_MIN / 2));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    // any cell on the bottom row is a valid start
    for (int j = 0; j < m; j++)
        dp[n - 1][j] = A[n - 1][j];

    // pull: dp[i][j] = best we can arrive at (i,j) from below, from left, or from diagonal below-left
    // process bottom-to-top, left-to-right so all three sources are already computed
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            long long from_below = dp[i + 1][j];                                    // came straight up
            long long from_left = (j > 0) ? dp[i][j - 1] : LLONG_MIN / 2;       // came from left
            long long from_diag = (j > 0) ? dp[i + 1][j - 1] : LLONG_MIN / 2;       // came diagonally
            long long best = max({ from_below, from_left, from_diag });
            if (best == LLONG_MIN / 2) continue;
            dp[i][j] = best + A[i][j];
        }
    }

    long long ans = LLONG_MIN / 2;
    for (int i = 0; i < n; i++)
        ans = max(ans, dp[i][m - 1]);

    cout << ans << endl;
}