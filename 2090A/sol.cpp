#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a) for (auto &element : a) cin >> element;
#define sz(s) (ll)s.size()
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")
#define vfill(a, n) vector<ll> a(n); fill(a)
#define vout(a) for (auto element : a) cout << element << " "; cout << endl

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<string> grid(n);
    vector<vector<bool>> up(n, vector<bool>(m, false));
    vector<vector<bool>> left(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '1') {
                if (i == 0 || up[i - 1][j] == true)
                    up[i][j] = true;

                if (j == 0 || left[i][j - 1] == true)
                    left[i][j] = true;

                if (!left[i][j] && !up[i][j]) {
                    NO;
                    return;
                }
            }
        }
    }

    YES;
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
