#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (left <= right && top <= bottom) {

        for (int i = top; i <= bottom; i++)
            a[i][left] = num++;
        left++;

        for (int j = left; j <= right; j++)
            a[bottom][j] = num++;
        bottom--;

        for (int i = bottom; i >= top; i--)
            a[i][right] = num++;
        right--;

        for (int j = right; j >= left; j--)
            a[top][j] = num++;
        top++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
            if (j + 1 < n) cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
