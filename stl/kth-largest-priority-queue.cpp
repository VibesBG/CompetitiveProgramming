/*
Задача 1. Намиране на K-тия най-голям елемент:  
Даден е масив от цели числа и число K. 
Напишете програма, която намира K-тия най-голям елемент в масива. 
Използвайте минимална приоритетна опашка за съхраняване на най-големите K елемента.
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int x : a) {
        if (pq.size() < k) {
            pq.push(x);
        }
        else if (x > pq.top()) {
            pq.pop();
            pq.push(x);
        }
    }

    cout << pq.top() << endl;
    return 0;
}

