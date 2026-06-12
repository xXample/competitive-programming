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
    ll n, x;
    cin >> n >> x;
    vll a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }

    ll first_jump = 0;
    for (int i = 0; i < n; ++i) {
        first_jump += a[i]*(b[i] - 1);
    }

    ll best_jump = 0;
    for (int i = 0; i < n; ++i) {
        best_jump = max(best_jump, a[i]*b[i] - c[i]);
    }

    if (first_jump >= x) {
        cout << 0 << '\n';
        return;
    }    
    if (best_jump <= 0) {
        cout << -1 << '\n';
        return;
    }
    ll num_rollbacks = (x - first_jump + (best_jump - 1)) / best_jump;
    cout << num_rollbacks << '\n';

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



