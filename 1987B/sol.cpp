#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    long long coins = 0;
    int max_diff = 0;
    int curr_max = a[0];
    for (int i = 0; i < n; i++) {

        if (a[i] < curr_max) {
            coins += curr_max - a[i];
            max_diff = max(curr_max - a[i], max_diff);
        }
        curr_max = max(curr_max, a[i]);
    }

    cout << coins + max_diff << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}
