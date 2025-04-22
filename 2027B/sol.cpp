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
    fill(a);

    /* apparently I can't solve an 1100 problem so I had to use the editorial */
    ll curr = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        curr = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] <= a[i])
                curr++;
        }
        mx = max(mx, curr);
    }
    cout << n - mx << endl;
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
