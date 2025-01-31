#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a1, a2, b1, b2;
  cin >> a1 >> a2 >> b1 >> b2;

  int wins = 0;

  wins += (a1 > b1 && a2 > b2);
  wins += (a1 > b1 && a2 == b2);
  wins += (a1 == b1 && a2 > b2);

  wins += (a1 > b2 && a2 > b1);
  wins += (a1 > b2 && a2 == b1);
  wins += (a1 == b2 && a2 > b1);

  // order matters
  cout << wins * 2 << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
