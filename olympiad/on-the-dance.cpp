#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

	for (int i = 0; i < T; i++)
	{
		int people;
		cin >> people;

		int combinations = people - 1;

		for (int i = combinations - 1; i > 0; i--)
			combinations *= i;

		cout << combinations;
	}
}
