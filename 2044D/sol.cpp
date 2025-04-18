#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    fill(a);

    vector<bool> used(n + 1);

    ll ui = 1;

    for (int i = 0; i < n; i++) {
        if (!used[a[i]]) {
            b[i] = a[i];
            used[a[i]] = true;
        } else {
            while (used[ui]) {
                ui++;
            }

            b[i] = ui;
            used[ui] = true;
        }
    }

	for (auto i : b) cout << i << " ";
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
