#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

ll factorial(ll n, ll mod) {
    ll out = 1;

    for (int i = 1; i <= n; i++) {
        out = out * i % mod;
    }
    return out;
}

void solve() {
    ll n, d;
    cin >> n >> d;

    cout << 1 << " ";

    if (n >= 3 || factorial(n, 3) * d % 3 == 0) {
        cout << 3 << " ";
    }

    if (d == 5) {
        cout << 5 << " ";
    }

	if (n >= 3 || d == 7 || factorial(n, 6) % 6 == 0) {
		cout << 7 << " ";
	}

	if (n >= 6 || d == 9 || (n >= 3 && (d == 6 || d == 3)) || factorial(n, 9) % 9 == 0) {
		cout << 9 << " ";
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
