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

    vector<ll> mx(n), sm(n);
    mx[0] = a[0];
    sm[n - 1] = a[n - 1];

    for (ll i = 1; i < n; i++) {
        mx[i] = max(a[i], mx[i - 1]);
    }

    for (ll i = n - 2; i >= 0; i--) {
        sm[i] = a[i] + sm[i + 1];
    }

    for (ll i = n - 1; i >= 0; i--) {
        if (i == 0) {
            cout << sm[i];
        } else {
            if (mx[i - 1] > a[i]) {
                cout << sm[i] - a[i] + mx[i - 1] << " ";
            } else {
                cout << sm[i] << " ";
            }
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
