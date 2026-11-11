/*
Задача 3. (Задача 5.2. от книгата Състезателно програмиране група С)

Даден е сортиран масив с N цели числа и число Х, които са вече прочетени в паметта. 
Напишете програма, която за време O(log N) проверява дали числото Х се среща в масива и намира позицията му.

Напишете програма (2 точки) и анализ на решение на задачата (1 точка).

Как работи алгоритъмът:

Инициализация: Започваме с left = 0 и right = N - 1.

Стесняване: Сравняваме X със средния елемент arr[mid]
Ако има съвпадение (arr[mid] == X), записваме индекса и прекратяваме цикъла.
Ако arr[mid] < X, търсеният елемент е надясно, затова left = mid + 1.
Ако arr[mid] > X, елементът е наляво, затова right = mid - 1.

Сложност: Изпълнява се за време O(log N) и използва O(1) допълнителна памет.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int left = 0, right = n - 1;
    int ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            ans = mid;
            break;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (ans != -1) {
        cout << ans << "\n";
    }
    else {
        cout << -1 << "\n";
    }

    return 0;
}