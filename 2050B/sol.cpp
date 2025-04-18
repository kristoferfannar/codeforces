#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    fill(a);

    ll odd = 0, even = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2) {
            odd += a[i];
        } else {
            even += a[i];
        }
    }

    if (odd % ((n) / 2) == 0 && even % ((n+1) / 2) == 0 && odd / ((n) / 2) == even / ((n+1) / 2))
        YES;
    else
        NO;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
        solve();
}
