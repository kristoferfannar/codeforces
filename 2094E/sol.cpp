#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a) for (auto &element : a) cin >> element;
#define sz(s) (ll)s.size()
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")
#define vfill(a, n) vector<ll> a(n); fill(a)
#define vout(a) for (auto element : a) cout << element << " "; cout << endl

vector<bool> vbit(ll num) {
    vector<bool> bits(31, 0);
    ll bit = 30;
    ll p = (ll)pow(2, bit);

    while (num) {
        if (num >= p) {
            num -= p;
            bits[bit] = true;
        }
        bit--;
        p /= 2;
    }

    return bits;
}

ll totalsum(vector<ll> &bits, ll xr, ll count) {
    ll sm = 0;
    ll mult = 1;

    auto xbits = vbit(xr);

    for (int i = 0; i < sz(bits); i++) {

        if (xbits[i]) {
            sm += mult * (count - bits[i]);
        } else {
            sm += mult * bits[i];
        }
        mult *= 2;
    }

    return sm;
}

void solve() {
    ll n;
    cin >> n;
    vfill(a, n);

    vector<ll> bits(31, 0);
    // vout(a);

    for (auto num : a) {
        auto b = vbit(num);
        for (int i = 0; i < sz(b); i++)
            bits[i] += b[i];
    }

    ll mx = totalsum(bits, a[0], n);
    for (auto num : a) {
        mx = max(mx, totalsum(bits, num, n));
    }

    cout << mx << endl;
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
