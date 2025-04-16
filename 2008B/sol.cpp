#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

#define YES (cout << "YES\n")
#define NO (cout << "NO\n")

ll sqrt(ll n) {
    ll l = 1, r = n, m;

    while (l <= r) {
        m = (l + r) / 2;
        if (m == (n / m) && n % m == 0) {
            return m;
        } else if (m < n / m) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    return -1;
}

void solve() {
    ll n;
    cin >> n;
    ll r = sqrt(n);
    string s;
    cin >> s;

    if (r == -1) {
        NO;
        return;
    }

    // cout << "got\n" << s << endl;
    bool success = true;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            if (i == 0 || i == r - 1) {
                if (s[i * r + j] != '1') {
                    // cout << "1: s[" << i << " * " << r << " + " << j << "] !=
                    // 1" << endl;
                    success = false;
                    break;
                }
            }

            else {
                if (s[i * r + j] != ((j == 0 || j == r - 1) + '0')) {
                    // cout << "2: s[" << i << " * " << r << " + " << j << "] !=
                    // " << (j == 0 || j == r - 1) << endl;
                    success = false;
                    break;
                }
            }
        }

        if (!success)
            break;
    }
    // cout << endl;

    if (success)
        YES;
    else
        NO;
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
