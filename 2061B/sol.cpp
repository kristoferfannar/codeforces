#include <bits/stdc++.h>
#include <ostream>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    fill(a);

    map<ll, ll> counter;
    vector<ll> doubles;
    for (auto i : a) {
        if (++counter[i] == 2)
            doubles.push_back(i);
    }

    sort(doubles.begin(), doubles.end(), greater<>());
    sort(a.begin(), a.end());

    for (auto dbl : doubles) {
        for (int i = 0; i < n - 1; i++) {
            auto curr = a[i];

            if (curr == dbl && counter[dbl] < 3)
                continue;

            ll next;
            bool init = false;
            for (int j = i + 1; j < n; j++) {
                if (a[j] == dbl && curr == dbl) {
                    if (counter[dbl] >= 4) {
                        init = true;
                        next = a[j];
                        break;
                    }
                } else if (a[j] == dbl) {
                    if (counter[dbl] >= 3) {
                        init = true;
                        next = a[j];
                        break;
                    }
                } else {
                    init = true;
                    next = a[j];
                    break;
                }
            }

            if (!init)
                continue;

            if (next - curr < dbl * 2) {
                cout << dbl << " " << dbl << " " << curr << " " << next << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
        solve();
}
