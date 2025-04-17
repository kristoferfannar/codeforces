#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

void solve() {
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    fill(a);

    vector<ll> pre, cur, pos;

    for (int i = 0; i < n; i++) {
        if (i < l - 1)
            pre.push_back(a[i]);
        else if (i < r)
            cur.push_back(a[i]);
        else
            pos.push_back(a[i]);
    }

    sort(pre.begin(), pre.end());
    sort(cur.begin(), cur.end());
    sort(pos.begin(), pos.end());

    // cout << "pre: ";
    // for (auto i : pre)
    //     cout << i << " ";
    // cout << endl;
    // cout << "cur: ";
    // for (auto i : cur)
    //     cout << i << " ";
    // cout << endl;
    // cout << "pos: ";
    // for (auto i : pos)
    //     cout << i << " ";
    // cout << endl;

    ll L = -1, R = -1;

    for (L = -1; L < (ll)min(pre.size(), cur.size()) - 1; L++)
        if (pre[L+1] >= cur[cur.size() - L - 2]) 
            break;

    for (R = -1; R < (ll)min(pos.size(), cur.size()) - 1; R++)
        if (pos[R+1] >= cur[cur.size() - R - 2]) 
            break;

    // cout << "L: " << L << " R: " << R << endl;

    ll sm = 0;
    for (auto i : cur)
        sm += i;

    ll presum = 0, postsum = 0;

    for (int i = 0; i <= L; i++) {
        presum += cur[cur.size() - i - 1] - pre[i];
    }

    for (int i = 0; i <= R; i++) {
        postsum += cur[cur.size() - i - 1] - pos[i];
    }
	// cout << sm << " - max(" << presum << ", " << postsum << ")" << endl;
    cout << sm - max(presum, postsum) << endl;
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
