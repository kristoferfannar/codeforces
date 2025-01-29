#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(m), q(k);

  for (int i = 0; i < m; i++)
    cin >> a[i];
  for (int i = 0; i < k; i++)
    cin >> q[i];

  if (k == n) {
    for (int i = 0; i < m; i++)
      cout << "1";
    cout << endl;
    return;
  } else if (k + 1 < n) {
    for (int i = 0; i < m; i++)
      cout << "0";
    cout << endl;
    return;
  }

  int missing = -1, last = 0;
  for (int i = 0; i < k; i++) {
    if (q[i] != last + 1) {
      missing = last + 1;
      break;
    }
    last = q[i];
  }

  if (missing == -1)
    missing = k + 1;

  for (int i = 0; i < m; i++) {
    if (a[i] == missing)
      cout << "1";
    else
      cout << "0";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
