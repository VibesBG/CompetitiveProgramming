//Magic Barrels

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long prev2 = 0, prev1 = 0;

        for (int i = 0; i < N; i++) {
            long long m;
            cin >> m;

            long long curr = max(prev1, prev2 + m);
            prev2 = prev1;
            prev1 = curr;
        }

        cout << prev1 << "\n";
    }

    return 0;
}
