#include <bits/stdc++.h>
using namespace std;

bool matches(const vector<int> &a, string str) {
  map<int, char> toChar;
  map<char, int> toInt;

  for (int i = 0; i < (int)a.size(); i++) {
    if (toChar.find(a[i]) == toChar.end() &&
        toInt.find(str[i]) == toInt.end()) {
      toChar[a[i]] = str[i];
      toInt[str[i]] = a[i];
    } else if (toChar[a[i]] != str[i] || toInt[str[i]] != a[i]) {
      return false;
    }
  }

  return true;
}

void solve() {
  int n, m;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> m;
  cin.ignore();
  string str;

  for (int i = 0; i < m; i++) {
    getline(cin, str);

    if ((int)str.size() != n) {
      cout << "NO\n";
    } else {
      if (matches(a, str))
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
