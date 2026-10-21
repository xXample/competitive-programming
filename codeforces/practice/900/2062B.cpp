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
    vll a(n); for (auto &i : a) cin >> i;

    for (ll i = 1; i <= n; ++i) {
        if (a[i-1] <= 2*max(n-i, i-1)) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

/*
Algorithm: for i = 1...n, if a[i] <= 2*max(n-i, i-1), output No. Otherwise if they all pass, accept.
PROOF:
The algorithm passes if for all i, a[i] > 2*max(n-i, i-1). Otherwise it fails.
For any i, max(n-i, i-1) indicates the distaince between i and n or 1, whichever is further. 
now, a[i] have more than 2x that distance, since it must last long enough for the trip of the pointer going forwards and back from edge to a[i]. 
*/

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