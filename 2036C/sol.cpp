#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

#define sz(s) (int)s.size()
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")

ll find(const vector<bool> &v, ll i) {
    ll found = 0;

    if (i >= 3 && i < sz(v) && v[i - 3] + v[i - 2] == 2 && v[i - 1] + v[i] == 0)
        found++;

    if (i >= 2 && i < sz(v) - 1 && v[i - 2] + v[i - 1] == 2 &&
        v[i] + v[i + 1] == 0)
        found++;

    if (i >= 1 && i < sz(v) - 2 && v[i - 1] + v[i] == 2 &&
        v[i + 1] + v[i + 2] == 0)
        found++;

    if (i >= 0 && i < sz(v) - 3 && v[i] + v[i + 1] == 2 &&
        v[i + 2] + v[i + 3] == 0)
        found++;

    return found;
}

void solve() {
    string s;
    cin >> s;

    vector<bool> sv(sz(s));

    for (int i = 0; i < sz(s); i++)
        sv[i] = s[i] == '1';

    ll q;
    cin >> q;

    ll counter = 0;

    for (int i = 0; i < sz(sv) - 3; i++) {
        if (sv[i] + sv[i + 1] == 2 && sv[i + 2] + sv[i + 3] == 0) {
            counter++;
        }
    }

    // for (auto i : sv)
    //     cout << i;
    // cout << endl;
    // cout << "counter: " << counter << endl;

    while (q--) {
        ll i, v;
        cin >> i >> v;
        i--;

        auto was = find(sv, i);
        sv[i] = v;
        auto is = find(sv, i);

        // for (auto a : sv)
        //     cout << a;
        // cout << endl;
        // cout << "counter: " << counter << " += " << is << " - " << was <<
        // endl;

        counter += is - was;

        if (counter)
            YES;
        else
            NO;
    }

    // cout << endl;
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
