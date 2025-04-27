#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;
#define sz(s) (ll) s.size()
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")

#define vfill(a, n)                                                            \
    vector<ll> a(n);                                                           \
    fill(a);

const int MAX = 200'000 + 2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll> ls(n), rs(n);

    for (int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;

        ls[i] = l;
        rs[i] = r;
    }

    sort(ls.begin(), ls.end());
    sort(rs.begin(), rs.end());

    vector<ll> amt(MAX, 0);

    for (auto i : ls)
        amt[i]++;
    for (auto i : rs)
        amt[i + 1]--;

    vector<ll> pre(MAX, 0);
    pre[0] = amt[0];
    for (int i = 1; i < rs.back() + 1; i++) {
        pre[i] = amt[i] + pre[i - 1];
    }

    vector<ll> admis(MAX, 0);
    admis[0] = (pre[0] >= k);
    for (int i = 1; i < MAX; i++) {
        admis[i] = (pre[i] >= k) + admis[i - 1];
    }

    while (q--) {
        ll a, b;
        cin >> a >> b;

        if (a == 0) {
            cout << admis[b] << endl;
        } else {
            cout << admis[b] - admis[a - 1] << endl;
        }
    }

    cout << endl;
}
