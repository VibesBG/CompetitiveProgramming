#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n, 0));

    int lower = 1;
    int upper = n * (n - 1) / 2 + 1;

    for (int col = 0; col < n; col++)
        for (int row = 0; row < n; row++)
            if (row > col)
                a[row][col] = lower++;

    for (int col = n - 1; col >= 0; col--)
        for (int row = n - 1; row >= 0; row--)
            if (row < col)
                a[row][col] = upper++;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
            if (j + 1 < n) cout << "  ";
        }
        cout << "\n";
    }

    return 0;
}
