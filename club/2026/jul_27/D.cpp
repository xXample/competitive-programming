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
    int n; cin >> n;
    vll a(n); for (auto &i : a) cin >> i;
    string s; cin >> s;

    vll pref(n+1, 0);
    for (int i = 1; i <= n; ++i) {
        pref[i] = pref[i-1] + a[i-1];
    }

    ll ans = 0;
    int l = 0, r = n-1;
    while (l < r && l < n && 0 <= r) {
        if (s[l] != 'L') {
            ++l;
        }
        else if (s[r] != 'R') {
            --r;
        } else {
            ans += pref[r+1] - pref[l];
            ++l, --r;
        }
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