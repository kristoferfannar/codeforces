#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, b;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++) {
    cin >> b;
    a[i] -= b;
  }

  // smallest and second smallest numbers
  int min1 = INT_MAX, min2 = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (a[i] < min1) {
      min2 = min1;
      min1 = a[i];
    } else if (a[i] < min2) {
      min2 = a[i];
    }
  }

  // second smallest must be equal or greater than the negative amount of the
  // smallest
  if (min2 + min1 < 0)
    cout << "NO\n";
  else
    cout << "YES\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
