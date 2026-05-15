#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (auto &i : a) cin >> i;
    
    vi pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; ++i) {
        pre[i] = max(a[i], pre[i-1]);
    }
    
    int cost = 0;
    for (int i = 0; i < n; i += 2) {
        int dif = -1;
        if (i > 0) dif = max(dif, a[i] - pre[i-1]);
        if (i < n-1) dif = max(dif, a[i] - pre[i+1]);
        cost += dif + 1;
    }
    
    cout << cost << '\n';
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