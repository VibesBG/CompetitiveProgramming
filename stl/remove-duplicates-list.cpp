/*
1. Премахване на дублирани елементи:
Даден е list с цели числа, където някои числа могат да се повтарят. 
Напишете функция, която премахва всички дубликати, оставяйки само първото срещане на всяко число.
*/

#include <iostream>
#include <list>

using namespace std;

void removeDuplicates(list<int>& lst)
{
    for (auto it = lst.begin(); it != lst.end(); ++it)
    {
        auto nextIt = it;
        ++nextIt;

        while (nextIt != lst.end()) {
            if (*nextIt == *it)
                nextIt = lst.erase(nextIt);
            else
                ++nextIt;
        }
    }
}

int main()
{
    list<int> lst = { 1, 2, 3, 2, 4, 1, 5, 3 };

    removeDuplicates(lst);

    for (int x : lst)
        cout << x << " ";

    return 0;
}

