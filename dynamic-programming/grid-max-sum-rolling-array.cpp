#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> dp(m, LLONG_MIN / 2);

    for (int i = 0; i < n; i++) {
        vector<int> row(m);
        for (int j = 0; j < m; j++)
            cin >> row[j];

        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                dp[0] = row[0];
                continue;
            }
            long long from_above = dp[j];
            long long from_left = (j > 0) ? dp[j - 1] : LLONG_MIN / 2;
            long long best = max(from_above, from_left);
            if (best == LLONG_MIN / 2) dp[j] = LLONG_MIN / 2;
            else dp[j] = best + row[j];
        }
    }

    cout << dp[m - 1] << endl;
}
