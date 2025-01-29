#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  cin.ignore();
  string s;
  cin >> s;

  int last = -1;
  int ops = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      last = max(last, i);
    }

    else if (s[i] == '0' && i > last + m - 1) {
      ops++;
      last = i + k - 1;
    }
  }

  cout << ops << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
