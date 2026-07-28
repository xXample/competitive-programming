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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vi pref(n+1, 0);
    for (int i = 2; i <= n; ++i) {
        int breaks = (s[i-1] == s[i-2]) ? 1 : 0;
        pref[i] = pref[i-1] + breaks;
    }

    while (q--) {
        int l, r, max_ops;
        cin >> l >> r >> max_ops;
        // --l, --r;

        int breaks = pref[r] - pref[l-1];
        if (l > 1 && s[l-1] == s[l-2]) --breaks;
        
        // for (int i = l; i < r; ++i) {
        //     if (s[i] == s[i+1]) ++breaks;
        // }
        if (((breaks+1) / 2) <= max_ops) cout << "YES\n";
        else cout << "NO\n";
    }
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