#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fill(a) for (auto &element : a) cin >> element;
#define sz(s) (ll)s.size()
#define YES (cout << "YES\n")
#define NO (cout << "NO\n")
#define vfill(a, n) vector<ll> a(n); fill(a)
#define vout(a) for (auto element : a) cout << element << " "; cout << endl

vector<bool> sieve(int n) {
    vector<bool> primes(n, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i * i < n; i++) {
        if (!primes[i])
            continue;
        for (int j = i * i; j < n; j += i) {
            primes[j] = false;
        }
    }

    return primes;
}

bool isPrime(ll n) {
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve() {
    ll x, k;
    cin >> x >> k;

    if (x == 1) {
        while (--k) {
            x *= 10;
            x++;
        }
        if (isPrime(x))
            YES;
        else
            NO;
    } else {
        if (k != 1 || !isPrime(x))
            NO;
        else {
            YES;
        }
    }
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
