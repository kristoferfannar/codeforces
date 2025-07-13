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

    ll ars = 1;
    ll last = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > last + 1) {
            last = a[i];
            ars++;
        }
    }

    cout << ars << endl;
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
