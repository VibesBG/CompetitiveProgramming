#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            int layer = min(min(i, n - 1 - i), min(j, n - 1 - j));

            cout << n - layer << " ";
        }
        cout << "\n";
    }
    return 0;
}
