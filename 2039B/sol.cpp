#include <bits/stdc++.h>
using namespace std;

void solve() {
  string n;
  getline(cin, n);

  int idx = -1, len = -1;

  // for strings of len 2
  if (n.size() == 2 && n[0] == n[1]) {
    idx = 0;
    len = 2;
  }

  // for strings of len >= 3
  for (int i = 0; i < (int)n.size() - 2; i++) {
    if ((n[i] != n[i + 1] && n[i] != n[i + 2] && n[i + 1] != n[i + 2])) {
      idx = i;
      len = 3;
      break;
    } else if (n[i] == n[i + 1]) {
      idx = i;
      len = 2;
    } else if (n[i + 1] == n[i + 2]) {
      idx = i + 1;
      len = 2;
    }
  }

  if (idx == -1)
    cout << "-1\n";
  else {
    for (int i = idx; i < idx + len; i++) {
      cout << n[i];
    }
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
    solve();
}

// abbc
// a
// b
// bb
// c
// ab
// abb
// abbc
// bc
// bbc

// abba
// a
// b
// ab
// bb
// ba
// abb
// bba
// abba

// bab
// b
// a
// ba
// ab
// bab

// ababababab
// a       -- 1 = 1
// b
// ab      -- 2 = 3
// ba
// aba     -- 3 = 5
// bab
// abab    -- 4 = 7
