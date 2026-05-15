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

bool ispow2(ll n) {
    if (n == 0) return false;
    return ((n & (n-1)) == 0);
}

ll LOG2(ll n) {
    int cnt = 0;
    while (n) {
        n >>= 1;
        ++cnt;
    }
    return cnt - 1;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // find first 1
    int i = 0;
    while (s[i] != '1') ++i;
    
    // find longest length of 1s
    int cur_len = 0;
    int max_len = 0;
    for (int j = i+1 % n; j != i; j = (j+1) % n) {
        if (s[j] == '1') cur_len = 0;
        else ++cur_len;
        max_len = max(max_len, cur_len);
    }
    cout << max_len << '\n';
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