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
    vi c(n), p(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i] >> p[i];
    }
    
    double ans = 0;
    for (int i = n-1; i >= 0; --i) {
        ans = max(ans, ans*(1.0 - p[i]/100.0) + c[i]);
    }
    cout << fixed << setprecision(6) << ans << '\n';
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