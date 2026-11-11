#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> g(10, 0), l(10, 0);


    for (int j = 1; j <= 9; j++) {
        for (int k = 0; k <= 9; k++) {
            if (k > j) l[k]++;
            if (k < j) g[k]++;
        }
    }

    for (int i = 2; i < n; i++) {
        vector<long long> ng(10, 0), nl(10, 0);
        for (int k = 0; k <= 9; k++) {
            for (int j = 0; j <= 9; j++) {
                if (k > j) nl[k] = (nl[k] + g[j]);
                if (k < j) ng[k] = (ng[k] + l[j]);
            }
        }
        g = ng;
        l = nl;
    }

    long long ans = 0;
    for (int j = 0; j <= 9; j++)
        ans += g[j] + l[j];

    cout << ans << endl;
}