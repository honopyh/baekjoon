#include <bits/stdc++.h>
using namespace std;

vector<int> graph[101];
int visited[101];
int cnt = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    queue<int> q;
    visited[1] = 1;
    q.push(1);
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        for (int adj: graph[current]) {
            if (!visited[adj]) {
                visited[adj] = 1;
                q.push(adj);
                cnt++;
            }
        }
    }

    cout << cnt;
}
