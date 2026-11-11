#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 != 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<long long> f(n + 1, 0);
    f[0] = 1;
    f[2] = 3;

    for (int i = 4; i <= n; i += 2)
        f[i] = 4 * f[i - 2] - f[i - 4];

    cout << f[n] << endl;
    return 0;
}