#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;
#define sz(s) (ll) s.size()
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll zeros = 3, ones = 1, threes = 1, twos = 2, fives = 1;
    fill(a);

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            zeros--;
        }
        if (a[i] == 1) {
            ones--;
        }
        if (a[i] == 3) {
            threes--;
        }
        if (a[i] == 2) {
            twos--;
        }
        if (a[i] == 5) {
            fives--;
        }

        if (zeros <= 0 && ones <= 0 && threes <= 0 && twos <= 0 && fives <= 0) {
            cout << i + 1 << endl;
            return;
        }
    }

    cout << 0 << endl;
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
