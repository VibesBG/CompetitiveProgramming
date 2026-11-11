/*
Задача 5. Преобразуване на римско число в десетично

Разглеждаме римското число от дясно наляво и ще пресмятаме десетичната им стойност, 
след което ще я натрупваме в някаква сума. Ако се окаже, че предходната цифра има по-малка десетична стойност от текущата, 
това ще означава, че предходната цифра е трябвало не да се прибави, а да се извади. Тъй като ние вече сме я прибавили веднъж, 
то следва да я извадим 2 пъти.

Пример:

 XVIII = 10+5+1+1+1 = 18

XIX = 10+1+10 , но 1<10 -> = 21-2*1= 19



Или се сравняват още в началото

X>I -> +10

I<X -> -1		19

X -> +10
*/

#include <iostream>

using namespace std;

int romanToNum(char c);

int main()
{
    string roman;
    cin >> roman;

    int sum = 0;

    for (int i = 0; i < roman.size(); i++)
    {
        int current = romanToNum(roman[i]);
        int next = romanToNum(roman[i + 1]);

        if (current < next)
            sum -= current;
        else
            sum += current;
    }

    cout << sum << endl;

    return 0;
}

int romanToNum(char c)
{
    switch (c)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
    }
}
