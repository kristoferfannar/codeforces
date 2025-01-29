#include <bits/stdc++.h>
using namespace std;

void solve_log() {
  int n, k, steps = 0, power;
  cin >> n >> k;

  if (k == 1) {
    cout << n << endl;
    return;
  }
  while (n) {
    power = (int)(log(n) / log(k));
    n -= (int)pow(k, power);
    steps++;
  }

  cout << steps << endl;
}

void solve_mod() {
  int n, k, steps = 0;
  cin >> n >> k;

  if (k == 1) {
    cout << n << endl;
    return;
  }

  while (n) {
    steps += n % k;
    n /= k;
  }

  cout << steps << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    // solve_log();
    solve_mod();
  }
}
