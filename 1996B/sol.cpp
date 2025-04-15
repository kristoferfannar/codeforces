#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fill(s)                                                                \
    for (auto &element : s)                                                    \
    cin >> element
#define sz(s) (int)s.size()

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<string> grid(n);
    vector<vector<ll>> out(n / k, vector<ll>(n / k));

    fill(grid);

    for (int i = 0; i < n; i += k)
        for (int j = 0; j < n; j += k)
            out[i / k][j / k] = grid[i][j] == '1';

    for (auto i : out) {
        for (auto e : i)
            cout << e;
        cout << endl;
    }
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
