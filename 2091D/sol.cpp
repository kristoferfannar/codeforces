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
    ll n, m, k;
    cin >> n >> m >> k;

    ll mostFilled = (k + n - 1) / n;

    ll gaps = m - mostFilled + 1;
    cout << (mostFilled + gaps - 1) / gaps << endl;
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
