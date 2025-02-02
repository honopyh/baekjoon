#include <bits/stdc++.h>
using namespace std;

int n, m;
unordered_set<int> uset;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        uset.insert(num);
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        if (uset.find(num) != uset.end()) {
            cout << 1 << ' ';
        } else {
            cout << 0 << ' ';
        }
    }
}
