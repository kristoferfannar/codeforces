#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;
#define sz(s) (ll) s.size()
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (s.front() == '1' || s.back() == '1') {
        YES;
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '1' && s[i + 1] == '1') {
            YES;
            return;
        }
    }
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
