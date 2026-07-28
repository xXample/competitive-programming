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
    string s; cin >> s;
    int max_len = 0;
    int cur_len = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '#') ++cur_len;
        else cur_len = 0;
        max_len = max(cur_len, max_len);
    }
    cout << ((max_len+1) / 2) << '\n';
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