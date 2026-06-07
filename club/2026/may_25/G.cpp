#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) (x).begin(), (x).end()
#define F first
#define S second

const int MOD = 676767677;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int n, m;
    cin >> n >> m;
    vi b(n);
    for (auto &i : b) cin >> i;
    vi c(m, 0);
    for (auto i : b) ++c[i];
    vi p = c;
    for (int i = 1; i < m; ++i) p[i] += p[i-1];
    vi a(n);
    for (int i = 0; i < n; ++i) {
        if (b[i] == 0) {
            a[i] = 1;
            continue;
        }

        int t = INF;
        for (int j = i-1; j <= i+1; j += 2) {
            if (0 <= j && j < n) {
                t = min(t, b[j]);
            }
        }

        if (t >= b[i]) { // && b[i] != 0
            cout << 0 << '\n';
            return;
        }
        if (t == b[i] - 1) {
            a[i] = p[b[i] - 1];
        }
        else { // t < b[i] - 1
            a[i] = c[b[i] - 1];
        }
    }
    ll ans = 1;
    // for (auto i : a) {
    //     cout << i << ' ';
    // }
    // cout << '\n';
    for (int i = 0; i < n; ++i) {
        ans = ((ans * a[i]) % MOD);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}