#include <bits/stdc++.h>
#include <ostream>
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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector<ll> b(n), prea(n), preb(n);
    vfill(a, n);

    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    prea[0] = a[0];
    preb[0] = b[0];

    for (int i = 1; i < n; i++) {
        prea[i] = prea[i - 1] + a[i];
        preb[i] = preb[i - 1] + b[i];
    }

	// cout << "prea: ";
	// for (auto i : prea) cout << i << " ";
	// cout << endl;
	// cout << "preb: ";
	// for (auto i : preb) cout << i << " ";
	// cout << endl;

    ll m;
    cin >> m;
    while (m--) {
        ll type, l, r;
        cin >> type >> l >> r;
		l--;r--;

        if (type == 1) {
            if (l == 0) {
                cout << prea[r] << endl;
            } else {
                cout << prea[r] - prea[l - 1] << endl;
            }
        } else {
            if (l == 0) {
                cout << preb[r] << endl;
            } else {
                cout << preb[r] - preb[l - 1] << endl;
            }
        }
    }
}
