#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    vector<vector<ll>> grid(n);
    int val = 0;
    for (int i = 0; i < n; i++) {
        queue<ll> row;
        for (int j = 0; j < m; j++) {
            row.push((val++ % k) + 1);
        }

        while (row.size()) {
            auto curr = row.front();
            row.pop();

            if ((i == 0 || grid[i - 1][grid[i].size()] != curr) && (grid[i].size() == 0 || grid[i].back() != curr)) {
                grid[i].push_back(curr);
            } else {
                row.push(curr);
            }
        }
    }

    for (auto row : grid) {
        for (auto cell : row)
            cout << cell << " ";
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
