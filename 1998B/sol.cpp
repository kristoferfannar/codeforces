#include <bits/stdc++.h>
using namespace std;

void solve() {

  int n;
  cin >> n;
  vector<int> p(n);

  for (auto &i : p)
    cin >> i;

  if (n == 1) {
    cout << "1\n";
    return;
  }

  cout << p[n - 1] << " ";

  for (int i = 0; i < n - 2; i++)
    cout << p[i] << " ";
  cout << p[n - 2] << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
