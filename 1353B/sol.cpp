#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a) for (auto &element : a) cin >> element;

void solve() {
	ll n, k;
	cin >> n >> k;
	vector<ll> a(n), b(n);
	fill(a); fill(b);

	for (int _i = 0; _i < k; _i++) {

		ll mxb = b[0], bidx = 0;
		for (int i = 0; i < n; i++) {
			if (b[i] > mxb) {
				bidx = i;
				mxb = b[i];
			}
		}

		ll mna = a[0], aidx = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] < mna) {
				mna = a[i];
				aidx = i;
			}
		}

		if (mxb > mna) {
			auto tmp = mxb;
			b[bidx] = mna;
			a[aidx] = tmp;
		}
	}

	ll sm = 0;
	for (int i = 0; i < n; i++) {
		sm += a[i];
	}

	cout << sm << endl;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t--) solve();
}
