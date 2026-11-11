/*
Задача 3. Симулация на Обслужване в Ресторант: Създайте   програма, която симулира процеса на обслужване 
на клиенти в ресторант. Клиентите идват на случаен принцип и се поставят в опашка за обслужване. 
Програмата трябва да следи реда на клиентите и времето, необходимо за тяхното обслужване.
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    // Време за обслужване на клиентите
    q.push(2); // клиент 1
    q.push(3); // клиент 2
    q.push(1); // клиент 3

    int time = 0;
    int currentService = 0;

    cout << "Simulation start\n";

    while (!q.empty() || currentService > 0) {
        cout << "Minute " << time << ": ";

        if (currentService == 0 && !q.empty()) {
            currentService = q.front();
            q.pop();
            cout << "Start serving new client ("
                << currentService << " minutes needed)";
        }

        if (currentService > 0) {
            currentService--;
        }

        if (currentService == 0) {
            cout << " -> finished";
        }

        cout << endl;
        time++;
    }

    cout << "Simulation end\n";
    return 0;
}

