#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b;
    cin >> a >> b;
    cout << lcm(a, b) << '\n';
}
