#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  if (n < 5) {
    cout << "-1\n";
    return;
  }

  for (int i = 2; i <= n; i += 2) {
    if (i == 4)
      continue;
    cout << i << " ";
  }

  cout << "4 5 ";

  for (int i = 1; i <= n; i += 2) {
    if (i == 5)
      continue;
    cout << i << " ";
  }

  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
