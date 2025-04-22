#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;
#define sz(s) (ll) s.size()
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")

void solve() {
    ll n, k;
    cin >> n >> k;

    if (k == 1 || k == n) {
        if (n == 1)
            cout << 1 << endl << 1 << endl;
        else
            cout << -1 << endl;
        return;
    }

    if (k == (n + 1) / 2) {
        cout << n << endl;
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    if (k < (n + 1) / 2) {
        cout << k * 2 - 1 << endl;
        for (int i = 1; i <= k * 2 - 1; i++) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << 2 * n - 2 * k + 1 << endl;
        cout << 1 << " ";
        for (ll i = k - (n - k) + 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
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
