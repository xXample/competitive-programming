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
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ++res;
            if (i-1 >= 0) s[i-1] = '#';
            if (i+1 <= n-1) s[i+1] = '#';
        }
    }

    vi rows;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0'){
            ++cnt;
            if (i == n-1) rows.pb(cnt);
        }
        else if (cnt == 0) continue;
        else {
            rows.pb(cnt);
            cnt = 0;
        }
    }
    
    for (auto i : rows) {
        res += (i+2) / 3;
    }
    cout << res << '\n';
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