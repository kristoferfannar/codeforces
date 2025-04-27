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
    string p, s;
    cin >> p >> s;

    ll pi = 0, pilast = 0, si = 0, silast = 0;

    while (si < sz(s) || pi < sz(p)) {
        while (si < sz(s) && s[si] == s[silast]) {
            si++;
        }

        while (pi < sz(p) && p[pi] == p[pilast]) {
            pi++;
        }

        if (s[silast] != p[pilast] || (pi - pilast) * 2 < (si - silast) ||
            (pi - pilast) > (si - silast) || (pi == pilast && si != silast) ||
            (si == silast && pi != pilast)) {
            NO;
            return;
        }

        silast = si;
        pilast = pi;
    }

    YES;
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
