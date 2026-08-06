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

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    ll n; cin >> n;
    vll a(2*n);
    for (auto &i : a) cin >> i;

    vll a_cnt(2*n+1, 0);
    for (auto i : a) {
        ++a_cnt[i];
    }

    ll x = 0, y = 0, z = 0;
    for (auto i : a_cnt) {
        if (i == 0) continue;
        if (i % 2 == 1) ++x;
        else if (i % 4 == 2) ++y;
        else ++z;
    }

    ll ans = x+2*y+2*z;
    if (x == 0 && z % 2 == 1) {
        ans -= 2;
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