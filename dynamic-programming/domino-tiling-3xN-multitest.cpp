#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int MAXN = 1001;
    vector<long long> f(MAXN, 0), g(MAXN, 0);
    f[0] = 1; f[2] = 3;
    g[1] = 1;
    for (int i = 2; i < MAXN; i++) {
        if (i >= 2) f[i] = f[i - 2] * 3 - (i >= 4 ? f[i - 4] : 0) + (i % 2 == 0 ? 0 : 0);
        g[i] = (i >= 1 ? f[i - 1] : 0) + (i >= 2 ? g[i - 2] : 0);
        if (i % 2 == 0) f[i] = f[i - 2] + 2 * g[i - 1];
        else f[i] = 0;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << f[n] << "\n";
    }
}