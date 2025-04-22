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
    string s, r;
    cin >> s >> r;

    ll ones = 0, zeros = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1')
            ones++;
        else
            zeros++;
    }

    for (int i = 0; i < n - 1; i++) {
        if (zeros == 0 || ones == 0) {
            NO;
            return;
        }
        if (r[i] == '1')
            zeros--;
        else
            ones--;
    }

    // cout << "0: " << zeros << " 1: " << ones << endl;
    if (zeros + ones == 1 && (zeros == 1 || ones == 1))
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
