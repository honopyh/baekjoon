#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end()); // 정렬: O(n log n)

    cin >> m;
    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        cout << binary_search(vec.begin(), vec.end(), num) << ' '; // O(log n) per query
    }
}
