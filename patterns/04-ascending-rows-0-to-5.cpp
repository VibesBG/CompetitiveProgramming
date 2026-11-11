/*
Задача 4. Напишете програма, която отпечатва следния шаблон. 
В реализацията на задачата да са включени оператори за цикли, променливи и 1 константа (максималното число). 
Не се допуска отпечатване на числата само с използване на оператори за извеждане.
0 1 2 3 4 5 
1 2 3 4 5 
2 3 4 5 
3 4 5 
4 5 
5 
5 
4 5 
3 4 5 
2 3 4 5 
1 2 3 4 5 
0 1 2 3 4 5 
*/

#include <iostream>

using namespace std;

int main()
{
	const short MAX = 5;
	int current = 0;

	for (int i = 0; i <= MAX; i++)
	{
		for (int j = 0; j <= MAX; j++)
		{
			if (i + j <= MAX)
			{
				cout << i + j << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0; i <= MAX; i++)
	{
		for (int j = 0; j <= MAX; j++)
		{
			if (j >= MAX - current)
			{
				cout << j << " ";
			}
		}
		current ++;
		cout << endl;
	}
}
