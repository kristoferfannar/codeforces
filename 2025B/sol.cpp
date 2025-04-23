#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;
#define sz(s) (ll) s.size()
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")

const ll MOD = 1'000'000'000 + 7;

ll pow_(ll x, ll y) {
    if (y == 0)
        return 1;

    auto res = pow_(x, y / 2);
    if (y % 2 == 0) {
        return res * res % MOD;
    } else {
        return x * pow_(x, y - 1) % MOD;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;

    vector<ll> N(t), K(t);
    for (int i = 0; i < t; i++)
        cin >> N[i];
    for (int i = 0; i < t; i++)
        cin >> K[i];

    for (int i = 0; i < t; i++) {
        auto k = K[i];

		ll out = pow_(2, k);
        cout << out << endl;
    }
}
