#include <bits/stdc++.h>
#include <numeric>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;
#define sz(s) (ll) s.size()

ll binsearch(const vector<ll> &v, ll target) {
    ll lo = 0, hi = sz(v) - 1, ret = -1, mid;

    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (v[mid] >= target) {
            ret = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    return ret;
}

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n), suf(n);
    fill(a);

    ll sm = accumulate(a.begin(), a.end(), 0LL);

    suf[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
        suf[i] = a[i] + suf[i + 1];

    ll leftover = (x - 1) % sm + 1;

    auto found = binsearch(suf, leftover);

    ll idx = n * k - n * ((x - 1) / sm + 1) + found + 1;

    cout << max((ll)0, idx) << endl;
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

/*
 *  3  4  2  1  5  3  4  2  1  5  3  4 2 1 5
 * 45 42 38 36 35 30 27 23 21 20 15 12 8 6 5
 *
 * q: 40
 * 40 % 15 = 10
 * 10 -> suf[1] = 12
 * 15(5*3) - 15(5*((40-1)/15 + 1)) + 1(idx) + 1(offset) = 7
 */

/*
 * 1 1
 * 2 1
 *
 * q: 2
 * 2 % 2 = 0
 * 0 -> suf[1] = 1
 * 2(2*1) - 2(2*((2 - 1)/2 + 1)) + 1(idx) + 1(offset) = 2
 */
