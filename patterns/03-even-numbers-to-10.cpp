/*
Задача 3. Напишете програма, която отпечатва следния шаблон. 
В реализацията на задачата да са включени оператори за цикли, променливи и 1 константа (максималното число). 
Не се допуска отпечатване на числата само с използване на оператори за извеждане.

2 4 6 8 10 
4 6 8 10 
6 8 10 
8 10 
10 
10 
8 10 
6 8 10 
4 6 8 10 
2 4 6 8 10 
*/

#include <iostream>

using namespace std;

int main()
{
	const short MAX = 10;
	int current = 0;

	for (int i = 1; i < MAX; i+=2)
	{
		for (int j = 1; j < MAX + 1; j+=2)
		{
			if (i + j <= MAX)
			{
				cout << i + j << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0; i < MAX; i+=2)
	{
		for (int j = 0; j < MAX + 1; j+=2)
		{
			if (j >= MAX - current)
			{
				cout << j << " ";
			}
		}
		current += 2;
		cout << endl;
	}
}
