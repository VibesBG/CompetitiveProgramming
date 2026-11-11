#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        double heightA, heightB, heightC, sideA, sideB, sideC, S, p, s;

        cin >> heightA >> heightB >> heightC;

        p = 1/ heightA + 1/ heightB + 1/ heightC;

        s = (p * (p - 2 / heightA) * (p - 2 / heightB) * (p - 2 / heightC));

        if (s < 0)
        {
            cout << "INVALID" << endl;
            continue;
        }


        S = 1 / sqrt(s);

        sideA = (2 * S) / heightA;
        sideB = (2 * S) / heightB;
        sideC = (2 * S) / heightC;

        /*
        cout << p << endl;
        cout << p - 2 / heightA << endl;
        cout << p - 2 / heightB << endl;
        cout << p - 2 / heightC << endl;
        cout << p * (p - 2 / heightA) * (p - 2 / heightB) * (p - 2 / heightC) << endl;
        cout << S << endl;
        cout << sideA << endl;
        cout << sideB << endl;
        cout << sideC << endl;
        */

        if (isinf(sideA) && isinf(sideB) && isinf(sideC))
            cout << "INVALID" << endl;
        else
            cout << fixed << setprecision(2) << sideA << " " << sideB << " " << sideC << endl;
    }
}

