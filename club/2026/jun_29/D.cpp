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
    
    vector<pii> valfreq;
    valfreq.reserve(n);
    for (int i = 1; i <= n; ++i) {
        if (freq[i] > 0) {
            valfreq.push_back({i, freq[i]});
        }
    }
    
    reverse(valfreq.begin(), valfreq.end());
    for (int i = 0; i < valfreq.size(); ++i) {
        if (valfreq[i].second % 2 == 0) {
            cout << "YES\n";
            return;
        }
        if (i+1 < valfreq.size() && valfreq[i].first - valfreq[i+1].first <= k) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;

    /*
    If we pick the max element, then that means Dabir wins. 
    If the max element is EVEN, accept.
    If the max - second-max <= k, accept.
    Otherwise, we look on to the second max. 
    We continue onward until we reach the bottom. 
    If we reach the bottom with no wins, we reject.
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