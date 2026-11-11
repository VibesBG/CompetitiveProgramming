#include <iostream>

using namespace std;

int main()
{
    const int maxNumber = 6;

    for (int i = 1; i <= maxNumber; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    for (int i = maxNumber; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}