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
    vll a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i]) { cout << "NO\n"; return; }
        // Case: a[i] <= b[i]
        if (i+1 < n) {
            a[i+1] -= b[i] - a[i];
        }
    }
    cout << "YES\n";
    return;
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