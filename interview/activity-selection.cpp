#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> events(n);

    for (int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        events[i] = { e, s };
    }

    sort(events.begin(), events.end());

    int count = 0;
    int lastEnd = INT_MIN;

    for (auto& ev : events) {
        int end = ev.first;
        int start = ev.second;

        if (start >= lastEnd) {
            count++;
            lastEnd = end;
        }
    }

    cout << count;
    return 0;
}
