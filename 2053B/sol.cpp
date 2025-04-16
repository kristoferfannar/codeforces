#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> w(n);
	const ll MAX = 2 * n + 1;
    vector<ll> vals(MAX, 0), pre(MAX, 0);

    for (int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        w[i] = pair(l, r);

        if (l == r) {
            vals[l]++;
        }
    }

    pre[0] = vals[0];
    for (int i = 1; i < MAX; i++) {
        pre[i] = (vals[i] > 0) + pre[i - 1];
    }

	// cout << "val: ";
	// for (int i = 1; i <= 10; i++)
	// 	cout << vals[i] << " ";
	// cout << endl;
	// cout << "pre: ";
	// for (int i = 1; i <= 10; i++)
	// 	cout << pre[i] << " ";
	// cout << endl;

    for (auto [l, r] : w) {
        if (l == r) {
            if (vals[l] == 1)
                cout << "1";
            else
                cout << "0";
        } else {
            if ((pre[r] - pre[l - 1]) < r - l + 1) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
    }

    cout << endl;
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
