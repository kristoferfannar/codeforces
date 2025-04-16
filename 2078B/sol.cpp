#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n, n - k + 1);

    for (int i = 0; i < n; i++) {
        if (k % 2) {
            a[i] = n;
        } else {
            a[i] = n - 1;
        }
    }

    a[n - 1] = n - 1;
    a[n - 2] = n - 0;

    for (auto i : a)
        cout << i << ' ';
    cout << endl;
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
