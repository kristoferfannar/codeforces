#include <bits/stdc++.h>
using namespace std;

void dbg(vector<int> v) {
  for (auto i : v)
    cout << i << " ";
  cout << endl;
}

void solve() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> grid;

  for (int i = 0; i < n; i++) {
    vector<int> row(m);

    for (int j = 0; j < m; j++)
      cin >> row[j];

    sort(row.begin(), row.end());
    grid.push_back(row);
  }

  vector<pair<int, int>> order(n);
  for (int i = 0; i < n; i++)
    order[i] = pair(grid[i][0], i + 1);

  sort(order.begin(), order.end(),
       [](pair<int, int> a, pair<int, int> b) { return a.first < b.first; });

  // for (auto [row, lo] : order)
  //   cout << row << ": " << lo << endl;

  sort(grid.begin(), grid.end(),
       [](vector<int> a, vector<int> b) { return a[0] < b[0]; });

  int last = -1;
  bool success = true;
  for (int x = 0; x < m; x++) {
    for (int y = 0; y < n; y++) {
      if (grid[y][x] <= last) {
        success = false;
        break;
      }
      last = grid[y][x];
    }
  }

  if (success) {
    for (int i = 0; i < n; i++)
      cout << order[i].second << " ";
    cout << endl;
  } else
    cout << "-1" << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
