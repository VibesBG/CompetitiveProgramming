#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<long long>> dp(n, vector<long long>(m, LLONG_MIN / 2));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    dp[n - 1][0] = A[n - 1][0];

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            if (dp[i][j] == LLONG_MIN / 2) continue;
            if (i > 0)   dp[i - 1][j] = max(dp[i - 1][j], dp[i][j] + A[i - 1][j]);  // push up
            if (j < m - 1) dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + A[i][j + 1]);  // push right
        }
    }

    cout << dp[0][m - 1] << endl;
}