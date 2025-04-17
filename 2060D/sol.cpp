#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    fill(a);

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            NO;
            return;
        }

        a[i + 1] -= a[i];
        a[i] = 0;
    }

	YES;
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
