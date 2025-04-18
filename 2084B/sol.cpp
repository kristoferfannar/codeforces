#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;
#define NO (cout << "NO\n")
#define YES (cout << "YES\n")
#define sz(s) ((ll)s.size())

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    fill(a);

    sort(a.begin(), a.end());

    if (a[0] == a[1]) {
        YES;
        return;
    }

    ll mn = a[0];

    vector<ll> fits;

    for (int i = 1; i < n; i++) {
        if (a[i] % mn == 0) {
            fits.push_back(a[i] / mn);
        }
    }

    if (sz(fits) == 0) {
        NO;
        return;
    }

    ll fitsgcd = fits[0];
    for (ll i = 1; i < sz(fits); i++) {
        fitsgcd = gcd(fitsgcd, fits[i]);
    }

    if (fitsgcd == 1)
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
