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
    int n, k;
    cin >> n >> k;

    vi freq(n+1, 0);
    for (int i = 0; i < n; ++i) {
        int val; 
        cin >> val;
        ++freq[val];
    }

    vector<pii> b;
    for (int i = 1; i <= n; ++i) {
        if (freq[i] > 0) {
            b.push_back({i, freq[i]});
        }
    }
    reverse(b.begin(), b.end());

    for (int i = 0; i < b.size(); ++i) {
        if (b[i].second % 2 == 0) {
            cout << "YES\n";
            return;
        }
        if (i+1 < b.size() && b[i].first - b[i+1].first <= k) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
    return;

    /*
    If top layer even, Egor wins. 
    If upper - lower ≤ k , Egor wins. 
    Run algorithm on next layer.
    */


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