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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    fill(a);

    sort(a.begin(), a.end());

    ll reached = 0, attempted = 0, last = 0;

    for (int i = 0; i < n; i++) {
        reached += (a[i] - last) * (n - i);
        attempted += (a[i] - last) * (n - i);

        last = a[i];

        if (reached >= k)
            break;

        attempted++;
    }
    cout << attempted - max(0ll, reached - k) << endl;
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
