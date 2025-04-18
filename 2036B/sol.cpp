#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

#define sz(s) (int)s.size()

void solve() {
    ll n, k;
    cin >> n >> k;

    map<ll, ll> counter;

    while (k--) {
        ll b, c;
        cin >> b >> c;

        counter[b] += c;
    }

    vector<ll> vals;

    for (auto [b, c] : counter) {
        // cout << b << ": " << c << endl;
        vals.push_back(c);
    }

    sort(vals.begin(), vals.end());

    ll sm = 0;

    // for (auto i : vals)
    //     cout << i << " ";
    // cout << endl;

    for (ll i = max((ll)0, sz(vals) - n); i < sz(vals); i++) {
        sm += vals[i];
    }

    cout << sm << endl;
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
