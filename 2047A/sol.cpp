#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int happy = 0, total = 0;
  for (auto i : a) {
    total += i;
    double sr = sqrt(total);
    if (roundf(sr) == sr && int(sr) % 2 == 1)
      happy += 1;
  }

  cout << happy << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
