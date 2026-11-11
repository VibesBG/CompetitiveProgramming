/*
stops - N
buses - M
cents - C (per k)
arr[] buses (Si - start, Ei - end, Di - distance)
Discount card - ... k
DC - P*k cents
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int N, // number of stops
            M, // number of buses
            C, // cents per k
            P; // card price

        cin >> N >> M >> C >> P;
        
        for (int j = 0; j < M; j++)
        {
            int Si, // starting point
                Ei, // end point
                Di; // distance

            cin >> Si >> Ei >> Di;


        }
    }
}

