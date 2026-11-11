#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;

	for (int i = 0; i < T; i++)
	{
		double a, b, c;
		cin >> a >> b >> c;

		if (a > b + c || b > a + c || c > a + b)
		{
			cout << "No" << endl;
			break;
		}

		double median = sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)) / 2;

		printf("%.2f\n", median);
	}
}