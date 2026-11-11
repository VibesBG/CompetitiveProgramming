#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int n;
vector<int> a;
vector<vector<long long>> dp;
vector<vector<long long>> prefix;

long long S(int i, int j) {
    return prefix[j + 1][0] - prefix[i][0];
}

long long solve(int i, int j) {
    if (i == j) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    long long res = LLONG_MAX;
    for (int k = i; k < j; k++) {
        long long left = S(i, k);
        long long right = S(k + 1, j);
        long long val = solve(i, k) + solve(k + 1, j) + left + right;
        res = min(res, val);
    }
    return dp[i][j] = res;
}

int main() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    prefix.assign(n + 1, vector<long long>(1, 0));
    for (int i = n - 1; i >= 0; i--)
        prefix[i][0] = prefix[i + 1][0] + a[i];
    dp.assign(n, vector<long long>(n, -1));
    cout << solve(0, n - 1) << "\n";
}