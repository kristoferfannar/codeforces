#include <bits/stdc++.h>
using namespace std;

string solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  // 0b11
  int flags = 3;
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      flags &= ~1;
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] != b[n - i - 1]) {
      flags &= ~2;
      break;
    }
  }

  return !!flags ? "Bob" : "Alice";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    cout << solve() << endl;
}
