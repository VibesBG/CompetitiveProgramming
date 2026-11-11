/*
2. Изтриване на всички срещания на даден елемент:
Напишете функция, която приема forward_list и стойност, 
и изтрива всички срещания на тази стойност в списъка.
*/

#include <iostream>
#include <forward_list>

using namespace std;

void removeAll(forward_list<int>& list, int x)
{
    auto prev = list.before_begin();

    while (next(prev) != list.end()) {
        if (*next(prev) == x)
            list.erase_after(prev);
        else
            ++prev;
    }
}

int main()
{
    forward_list<int> list = { 1, 2, 3, 2, 4, 2, 5 };
    int n = 2;

    removeAll(list, n);

    for (int value : list)
        cout << value << " ";

    return 0;
}

