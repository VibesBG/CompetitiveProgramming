#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, w; cin >> n >> w;
        vector<int> c(n), wt(n);
        for (int i = 0; i < n; i++) cin >> c[i] >> wt[i];
        vector<long long> dp(w + 1, 0);
        for (int i = 0; i < n; i++)
            for (int j = w; j >= wt[i]; j--)
                dp[j] = max(dp[j], dp[j - wt[i]] + c[i]);
        cout << dp[w] << "\n";
    }
}