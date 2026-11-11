#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>

using namespace std;

priority_queue<int> lower;
priority_queue<int, vector<int>, greater<int>> upper;

void addNum(int num) {
    lower.push(num);
    upper.push(lower.top());
    lower.pop();
    if (upper.size() > lower.size()) {
        lower.push(upper.top());
        upper.pop();
    }
}

double getMedian() {
    if (lower.size() > upper.size())
        return lower.top();
    return (lower.top() + upper.top()) / 2.0;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x; cin >> x;
        addNum(x);
        cout << fixed << setprecision(1) << getMedian() << "\n";
    }
}