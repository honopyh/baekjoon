#include <bits/stdc++.h>
using namespace std;

long long dp[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 11; i <= 100; i++) {
        dp[i] = dp[i - 5] + dp[i - 1];
    }

    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
}
