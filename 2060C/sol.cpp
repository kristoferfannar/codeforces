#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, score = 0, curr;
  cin >> n >> k;
  vector<int> v(n);
  map<int, int> counter;

  for (int i = 0; i < n; i++) {
    cin >> curr;

    if (counter.find(k - curr) != counter.end() && counter[k - curr] > 0) {
      score++;
      counter[k - curr]--;
    } else {
      if (counter.find(curr) == counter.end())
        counter[curr] = 0;
      counter[curr]++;
    }
  }

  cout << score << endl;
};

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
