#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a)                                                                \
    for (auto &element : a)                                                    \
        cin >> element;

ll findlastbit(ll x) {
    ll bit = 30, lastbit = -1;
    while (x) {
        if (x >= (ll)pow(2, bit)) {
            x -= (ll)pow(2, bit);
            lastbit = bit;
        }
        bit--;
    }

    return lastbit;
}

ll findfirstbit(ll x) {
    ll bit = 30;
    while (x && bit) {
        if (x >= (ll)pow(2, bit)) {
            return bit;
        }
        bit--;
    }

    return -1;
}

ll findlastzerobit(ll x) {
    for (int i = 0; i <= 30; i++) {
        if ((x & (0x1 << i)) == 0 && (x > (0x1 << i))) {
            return i;
        }
    }
    return -1;
}

void solve() {
    ll x;
    cin >> x;

    ll lastzero = findlastzerobit(x);
    ll last = findlastbit(x);

    if (lastzero == -1 || findfirstbit(x) == findlastbit(x)) {
        cout << -1 << endl;
        return;
    }

    cout << (ll)pow(2, lastzero) + (ll)pow(2, last) << endl;
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

/*
 *   x: 12 -> 1100
 *   y:  6 -> 0110
 * y^x: 10 -> 1010
 *
 *   x: 12 -> 1100
 *   y:  5 -> 0101
 * y^x:  9 -> 1001
 *
 */
