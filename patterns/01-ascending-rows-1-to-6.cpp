/*
Задача 1. Напишете програма, която отпечатва следния шаблон. В реализацията на задачата да са включени оператори за цикли, променливи и
1 константа (максималното число). Не се допуска отпечатване на числата само с използване на оператори за извеждане.


1 2 3 4 5 6 
2 3 4 5 6 
3 4 5 6 
4 5 6 
5 6 
6 
6 
5 6 
4 5 6 
3 4 5 6 
2 3 4 5 6 
1 2 3 4 5 6 


Решение:
*/

#include <iostream>

using namespace std;

int main()
{
	const short MAX = 6;
	int current = 0;

	for (int i = 0; i < MAX; i++)
	{
		for (int j = 1; j < MAX + 1; j++)
		{
			if (i + j <= MAX)
			{
				cout << i + j << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0; i < MAX; i++)
	{
		for (int j = 1; j < MAX + 1; j++)
		{
			if (j >= MAX - current)
			{
				cout << j << " ";
			}
		}
		current++;
		cout << endl;
	}
}