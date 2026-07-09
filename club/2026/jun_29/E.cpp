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
    int n; cin >> n;
    vi a(n); 
    for (auto &x : a) cin >> x, --x;
    vector<vector<bool>> good(n, vector<bool>(n));

    for (int i = 0; i < n; ++i) {
        vector<bool> seen(n);
        int mn = a[i], mx = a[i];
        for (int j = i; j < n; ++j) {
            if (seen[a[j]]) break;
            seen[a[j]] = true;
            
            mn = min(mn, a[j]);
            mx = max(mx, a[j]);
            if (j - i == mx - mn) good[mn][mx] = true;
        }
    }

    for (int length = n/2; length > 0; --length) {
        for (int i = 0; i+2*length-1 < n; ++i) {
            if (good[i][i+length-1] && good[i+length][i+2*length-1]) {
                cout << length << '\n';
                return;
            }
        }
    }
    cout << "0\n";
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