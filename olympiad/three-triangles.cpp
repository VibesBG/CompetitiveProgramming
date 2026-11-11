#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <tuple>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    set<int> sides;

    for (int i = 0; i < N; i++) 
    {
        int side;
        cin >> side;
        sides.insert(side);
    }

    vector<int> sortedSides(sides.begin(), sides.end());
    sort(sortedSides.begin(), sortedSides.end());

    set<tuple<int, int, int>> triangle;

    int size = sortedSides.size();

    for (int i = 0; i < size; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            for (int k = j + 1; k < size; k++) 
            {
                int x = sortedSides[i], y = sortedSides[j], z = sortedSides[k];

                if (x == y || y == z || x == z) 
                    continue;

                if (x + y > z && x + z > y && y + z > x) 
                    triangle.insert(tuple<int, int, int>(x, y, z));
            }
        }
    }

    cout << triangle.size() << endl;

    return 0;
}
