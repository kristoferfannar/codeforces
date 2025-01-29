#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, curr;
  cin >> n >> k;
  // vector<int> v(n);
  map<int, int> counter;
  for (int i = 0; i < n; i++) {
    cin >> curr;

    if (counter.find(curr) == counter.end())
      counter[curr] = 0;
    counter[curr]++;
  }

  auto cmp = [](pair<int, int> l, pair<int, int> r) {
    return l.second > r.second;
  };
  priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> queue(
      cmp);

  for (auto [val, count] : counter)
    queue.push(pair(val, count));

  while (k && queue.size() > 1) {
    if (queue.top().second <= k) {
      k -= queue.top().second;
      queue.pop();
    } else {
      k = 0;
    }
  }

  cout << queue.size() << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
