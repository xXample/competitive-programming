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
    int n; 
    cin >> n;
    vll a(n); 
    for (auto &i : a) cin >> i;
    
    vll pref(n+1, 0);
    pref[1] = a[0];
    for (int i = 2; i <= n; ++i) {
        pref[i] = abs(a[i-1]) + pref[i-1];
    }
    vll suff(n+1, 0);
    for (int i = 1; i <= n; ++i) {
        suff[i] = -a[n-i] + suff[i-1];
    }

    ll ans = -LINF;
    for (int i = 0; i < n; ++i) {
        ans = max(ans, pref[i] + suff[n-1-i]); 
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