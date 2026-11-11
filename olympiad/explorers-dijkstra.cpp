#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct Edge {
    int to;
    int weight;
};

int dijkstra(int N, const vector<vector<Edge>>& graph) {
    vector<int> dist(N + 1, INT_MAX);
    dist[1] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({ 0, 1 });

    while (!pq.empty()) {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (d > dist[node]) continue;

        for (auto& edge : graph[node]) {
            int newDist = d + edge.weight;
            if (newDist < dist[edge.to]) {
                dist[edge.to] = newDist;
                pq.push({ newDist, edge.to });
            }
        }
    }

    return dist[N];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<vector<Edge>> graph(N + 1);

        for (int i = 0; i < M; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back({ v, w });
            graph[v].push_back({ u, w });
        }

        cout << dijkstra(N, graph) << "\n";
    }

    return 0;
}
