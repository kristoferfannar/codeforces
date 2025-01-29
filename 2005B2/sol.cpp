#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, q, qInit;
  cin >> n >> m >> qInit;

  vector<int> ms(m);
  for (int i = 0; i < m; i++)
    cin >> ms[i];

  sort(ms.begin(), ms.end());

  int mMin = *min_element(ms.begin(), ms.end()),
      mMax = *max_element(ms.begin(), ms.end());

  for (int i = 0; i < qInit; i++) {
    cin >> q;

    if (q < mMin) {
      cout << mMin - 1 << endl;
    } else if (q > mMax) {
      cout << n - mMax << endl;
    } else {
      int mid, lo = 0, hi = m - 1;

      while (lo + 1 < hi) {
        mid = (hi + lo) / 2;
        if (ms[mid] < q && ms[mid + 1] > q) {
          lo = mid;
          hi = mid + 1;
          break;
        } else if (ms[mid] > q)
          hi = mid;
        else if (ms[mid] < q)
          lo = mid + 1;
      }
      cout << (ms[hi] - ms[lo]) / 2 << endl;
    }
  }
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
