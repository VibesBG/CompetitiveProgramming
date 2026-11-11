#include <iostream>

using namespace std;

int main() {
    const short MAX = 5;

    for (int i = 0; i <= MAX; i++)
    {
        for (int j = 0; j <= MAX - i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    for (int i = MAX; i >= 0; i--)
    {
        for (int j = 0; j <= MAX - i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}