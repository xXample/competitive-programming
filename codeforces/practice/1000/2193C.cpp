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
    ll n, q;
    cin >> n >> q;
    vll a(n), b(n);

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) a[i] = max(a[i], b[i]);
    for (int i = n-2; i >= 0; --i) a[i] = max(a[i], a[i+1]);
    vll p(n+1); 
    for (int i = 0; i < n; ++i) p[i+1] = p[i] + a[i];
    for (int i = 0; i < q; ++i) {
        ll l, r;
        cin >> l >> r;
        cout << p[r] - p[l-1]<< ' ';
    }
    cout << '\n';
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