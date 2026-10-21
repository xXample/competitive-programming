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
    ll n, m;
    cin >> n >> m;
    vll a(n);
    ll b;
    for (auto &i : a) cin >> i;
    cin >> b;

    a[0] = min(b - a[0], a[0]);
    for (int i = 1; i < n; ++i) {
        ll low = min(b-a[i], a[i]);
        ll high = max(b-a[i], a[i]);
        if (low >= a[i-1]) {
            a[i] = low;
        } else {
            a[i] = high;
        }
    }

    // Verify non-decreasing
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i+1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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