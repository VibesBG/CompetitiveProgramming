/*
Задача 2. (informatika.bg) По случаен начин е избрано цяло число num между 1 и 1000. 
Имате функция guess(x), която връща 0, ако num == x, -1 ако x < num, и +1 ако x > num. 
Изградете алгоритъм, който, познава числото num с минимален брой викания на функцията guess(x). 
Определете броя извиквания при най-лошия избор на num за вашия алгоритъм.

Напишете програма (2 точки) и анализ на решение на задачата (1 точка).

Как работи алгоритъмът:

Инициализация: Стартираме с търсена област left = 1 и right = 1000.

Проверка с API: Пресмятаме средата mid и извикваме guess(mid).
Ако резултатът е 0, числото е намерено и алгоритъмът връща mid.
Ако резултатът е -1 (което означава x < num), търсеното число е по-голямо, затова свиваме границата до left = mid + 1.
Ако резултатът е +1 (което означава x > num), търсеното число е по-малко, затова свиваме границата до right = mid - 1.

Най-лош случай: Броят извиквания на функцията guess(x) при най-неблагоприятно намислено число е точно 10.
*/

#include <iostream>

using namespace std;

int guess(int x);

int findNumber() {
    int left = 1, right = 1000;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int res = guess(mid);
        if (res == 0) {
            return mid;
        }
        else if (res == -1) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << findNumber() << "\n";
    return 0;
}

int guess(int x) {
    int secret_num = 423;
    if (x == secret_num) return 0;
    if (x < secret_num) return -1;
    else return 1;
}