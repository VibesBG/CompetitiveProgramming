#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int balance = 0;
    for (char c : s) {
        if (c == '(')
            balance++;
        else if (c == ')')
            balance--;
            
        if (balance < 0) {
            return 0;
        }
    }

    if (balance == 0)
        return 1;
    else
        return 0;
}
