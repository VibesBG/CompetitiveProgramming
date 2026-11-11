#include <iostream>

using namespace std;

const int MAX_STONES = 1000;

int below[MAX_STONES][MAX_STONES];
int belowCount[MAX_STONES]; 
int heightCache[MAX_STONES]; 

int findH(int stone);

int main() 
{
    int N, K;
    cin >> N >> K;

    for (int i = 0; i < K; i++) 
    {
        int a, b; // a lies on b
        cin >> a >> b; 
        below[a][belowCount[a]++] = b;
    }

    int maxH = 0;

    for (int s = 1; s <= N; s++) // s = stone
    {
        int H = findH(s);
        if (H > maxH)
            maxH = H;
    }

    cout << maxH << endl;
    return 0;
}

int findH(int s) 
{
    if (heightCache[s] != 0) return heightCache[s];

    int currentH = 1;

    for (int i = 0; i < belowCount[s]; i++) 
    {
        int lowerStone = below[s][i];
        int possibleH = findH(lowerStone) + 1;

        if (possibleH > currentH)
            currentH = possibleH;
    }

    heightCache[s] = currentH;
    return currentH;
}