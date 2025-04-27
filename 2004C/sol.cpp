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
    ll n, k;
    cin >> n >> k;
    vfill(a, n);
    sort(a.begin(), a.end());

    ll out = 0;
    for (ll i = n - 2; i >= 0; i -= 2) {
        auto inc = min(k, a[i + 1] - a[i]);
        k -= inc;
        a[i] += inc;
        out += a[i + 1] - a[i];
    }

    if (n % 2)
        out += a[0];

    cout << out << endl;
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
