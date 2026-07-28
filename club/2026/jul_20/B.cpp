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
    vector<ll> a(n);
    for (auto &i : a) cin >> i;

    for (int i = 0; i < n-1; ++i) {
        ll diff = a[i] - (i+1);
        if (diff < 0) {
            cout << "NO\n";
            return;
        }
        a[i] -= diff;
        a[i+1] += diff;
        if (a[i] >= a[i+1]) {
            cout << "NO\n";
            return;
        }
    }
    if (a[n-1] < n) cout << "NO\n";
    else cout << "YES\n";
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