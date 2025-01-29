#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int curr = 1, ops = 1;

  while (curr < n) {
    curr = (curr + 1) * 2;
    ops++;
  }

  cout << ops << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
