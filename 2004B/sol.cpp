#include <bits/stdc++.h>
using namespace std;

void solve() {
  int l, r, L, R;
  cin >> l >> r;
  cin >> L >> R;

  if (l == L) {
    if (r == R) {
      cout << r - l << endl;
      return;
    }
    cout << min(r, R) - l + 1 << endl;
    return;
  } else if (r == R) {
    cout << r - max(l, L) + 1 << endl;
    return;
  }

  if (R < l || r < L) {
    cout << "1\n";
  } else {
    cout << min(r, R) - max(l, L) + 2 << endl;
  }
}

int main() {

  int t;
  cin >> t;
  while (t--)
    solve();
}

// 1 2 3 4 5 6 7 8 9
//       [ [
//   [ [ [ [ [ [ [

// 1 2 3 4 5 6 7 8 9
//       [ [
//     [ [
