#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a) for (auto &element : a) cin >> element;

void solve() {
	ll a1, a2, a4, a5;
	cin >> a1 >> a2 >> a4 >> a5;

	auto a3 = a1 + a2;
	if (a2 + a3 == a4 && a3 + a4 == a5) {
		cout << 3 << endl;
		return;
	}
	if (a2 + a3 == a4 || a3 + a4 == a5) {
		cout << 2 << endl;
		return;
	}

	a3 = a5 - a4;
	if (a2 + a3 == a4) {
		cout << 2 << endl;
		return;
	}

	cout << 1 << endl;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t--) solve();
}
