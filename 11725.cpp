#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> tree[100001];
int parent[100001];

void bfs(int root) {
    queue<int> q;
    q.push(root);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next: tree[cur]) {
            // 방문하지 않은 노드
            if (parent[next] == 0) {
                parent[next] = cur;
                q.push(next);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    bfs(1);

    for (int i = 2; i <= n; ++i) {
        cout << parent[i] << '\n';
    }
}
