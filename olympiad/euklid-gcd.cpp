#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	while (N != 0 && M != 0)
	{
		if (N <= M)
			M = M % N;
		else if (M <= N)
			N = N % M;
	}

	cout << max(N, M);
}