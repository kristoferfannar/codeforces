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
    vfill(p, n);

    string s;
    cin >> s;

    vector<ll> F(n, 0);
    vector<bool> covered(n, false);

    for (ll i = 1; i <= n; i++) {
        if (covered[i - 1])
            continue;

        ll cr = i;
        ll count = s[cr - 1] == '0';
        bool circle = false;

        while (p[cr - 1] != cr) {
            cr = p[cr - 1];

            if (cr == i) {
                circle = true;
                break;
            }

            if (s[cr - 1] == '0')
                count++;
        }

        if (circle) {
            cr = i;
            while (p[cr - 1] != cr) {
                cr = p[cr - 1];
                F[cr - 1] = count;
                covered[cr - 1] = true;

                if (cr == i)
                    break;
            }
        }

        F[i - 1] = count;
        covered[i - 1] = true;
    }

    vout(F);
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
