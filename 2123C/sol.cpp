#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a) for (auto &element : a) cin >> element;
#define sz(s) (ll)s.size()
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")
#define vfill(a, n) vector<ll> a(n); fill(a)
#define vout(a) for (auto element : a) cout << element << " "; cout << endl

void solve() {
    ll n;
    cin >> n;
    vfill(a, n);

    vector<bool> works(n, false);

    vector<ll> mn(n), mx(n);
    mn[0] = a[0];
    mx[n - 1] = a[n - 1];

    for (int i = 1; i < sz(a); i++) {
        mn[i] = min(a[i], mn[i - 1]);
    }

    for (ll i = n - 2; i >= 0; i--) {
        mx[i] = max(a[i], mx[i + 1]);
    }

    for (int i = 0; i < sz(a); i++) {
        if (a[i] == mn[i] && (i == sz(a) - 1 || a[i] >= mn[i + 1])) {
            works[i] = true;
        }

        if ((i == 0 || a[i] <= mx[i - 1]) && a[i] == mx[i]) {
            works[i] = true;
        }
    }

    for (auto w : works) {
        if (w) {
            cout << "1";
        } else {
            cout << "0";
        }
    }

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
