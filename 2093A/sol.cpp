#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a) for (auto &element : a) cin >> element;
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")

void solve() {
	ll k;
	cin >> k;

	k % 2 ? YES : NO;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t--) solve();
}
