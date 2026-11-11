/*
Задача 1. (informatika.bg) Напишете функция, която намира корен трети на дадено неотрицателно реално число N.

Как работи алгоритъмът:

Граници: Ако N >= 1, коренът е между 0 и N. Ако 0 <= N < 1, коренът е между 0 и 1. 
Затова първоначално задаваме left = 0 и right = max(1.0, N).

Итерации: Вместо цикъл с делта разлика, който може да зацикли заради точността на double, фиксираме точно 100 итерации. 
Това гарантира максимална прецизност до последния бит.

Свиване: Проверяваме средата mid. Ако mid * mid * mid <= N, коренът е в дясната половина, затова left = mid. 
В противен случай е в лявата (right = mid).
*/

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

double cubeRoot(double n) {
    double left = 0, right = max(1.0, n);
    for (int i = 0; i < 100; ++i) {
        double mid = left + (right - left) / 2.0;
        if (mid * mid * mid <= n) {
            left = mid;
        }
        else {
            right = mid;
        }
    }
    return left;
}

int main() {
    double n;
    if (cin >> n) {
        cout << fixed << setprecision(9) << cubeRoot(n) << "\n";
    }
    return 0;
}