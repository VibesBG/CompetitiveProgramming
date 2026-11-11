#include <iostream>

using namespace std;

int combination(int x, int y)
{
	int comb = x;
	int devision = y;

	for (int i = x - 1; i > x - y; i--)
		comb *= i;

	for (int i = y - 1; i > 0; i--)
		devision *= i;

	return comb / devision;
}

int main()
{
    int T;
    cin >> T;

	for (int i = 0; i < T; i++)
	{
		int dancers, boys, girls, group, groupBoys, groupGirls;
		cin >> dancers >> boys >> girls >> group >> groupBoys >> groupGirls;

		cout << combination(boys, groupBoys) * combination(girls, groupGirls);
	}
}
