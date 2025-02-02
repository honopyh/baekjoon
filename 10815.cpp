#include <bits/stdc++.h>
using namespace std;

int n, m;
unordered_map<int, bool> umap;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        umap[num] = true;
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        if (umap[num]) {
            cout << 1 << ' ';
        } else {
            cout << 0 << ' ';
        }
    }
}
