#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, q;
  cin >> n >> m >> q;

  int m1, m2;
  cin >> m1 >> m2;
  cin >> q;

  m = max(m1, m2);
  m1 = min(m1, m2);
  m2 = m;

  if (q < m1) {
    cout << m1 - 1 << endl;
  } else if (q > m2) {
    cout << n - m2 << endl;
  } else {
    cout << (m2 - m1) / 2 << endl;
  }
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
