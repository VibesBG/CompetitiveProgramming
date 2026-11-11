#include <iostream>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    unsigned long long result = 1;

    if (n > 0) {
        for (int i = 1; i < n; i++)
            result *= 2;
        cout << result << endl;
    }
    else
        cout << 0 << endl;

    return 0;
}