#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hour, minute;
    cin >> hour >> minute;

    double minuteAngle = minute * 6;
    double hourAngle = (hour % 12) * 30 + minute * 0.5;
    double angle = abs(hourAngle - minuteAngle);

    if (angle > 180)
        angle = 360 - angle;

    cout << angle << endl;

    return 0;
}

/*
Минутната стрелка се движи с 6 градуса за минута тоест 360 за един час.
Часовата стрелка се движи с 30 градуса за час и допълнително с 0.5 градуса за всяка минута.
Изчисляваме ъглите на двете стрелки, намираме абсолютната им разлика
и ако тя е по-голяма от 180°, вземаме 360° минус тази разлика,
за да получим по-малкия ъгъл между стрелките.
*/

