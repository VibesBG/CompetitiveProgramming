#include <iostream>
#include <cmath>
#include <cfloat>

using namespace std;

int main()
{
    int n;
    cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		pair<int, int> help;
		help = make_pair(x, y);

		int m;
		cin >> m;

		double fastest = DBL_MAX;
		string fastestShip;

		for (int j = 0; j < m; j++)
		{
			string name;
			double sx, sy, speed;

			cin >> name >> sx >> sy >> speed;
			pair<string, pair<pair<double, double>, double>> ship;

			ship.first = name;
			ship.second.first = make_pair(sx, sy);
			ship.second.second = speed;

			double distance = sqrt(pow((sx - x), 2) + pow((sy - y), 2));
			double time = distance / speed;

			if (time < fastest)
			{
				fastest = time;
				fastestShip = name;
			}
		}
		cout << fastestShip << endl;
	}
}