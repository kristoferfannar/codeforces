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
    sort(a.begin(), a.end());

    auto half = n / 2;

    if (half >= n - 1) {
        cout << -1 << endl;
        return;
    }

    auto mxunhappy = a[half] * 2;
    auto sm = accumulate(a.begin(), a.end(), 0ll);

    cout << max(0ll, n * mxunhappy - sm + 1) << endl;
    return;
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
