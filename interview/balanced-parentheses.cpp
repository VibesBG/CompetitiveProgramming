#include <iostream>
#include <string>

using namespace std;

bool isBalanced(string s);

int main() {
    string s;
    cin >> s;

    cout << isBalanced(s) << endl;

    return 0;
}

bool isBalanced(string s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') balance++;
        else if (c == ')') balance--;

        if (balance < 0) return false;
    }
    return balance == 0;
}
