#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<long long>> dp(n, vector<long long>(m, 0));
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];

        if (grid[0][0] == -1 || grid[n - 1][m - 1] == -1)
            return 0;

        dp[0][0] = 1;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == -1) continue;
                if (i > 0) dp[i][j] += dp[i - 1][j];
                if (j > 0) dp[i][j] += dp[i][j - 1];
            }

        cout << dp[n - 1][m - 1] << endl;
    }
}