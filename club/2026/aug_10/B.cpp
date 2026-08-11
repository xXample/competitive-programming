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
    // 0, 1, or 2 letters removed
    // 0 when all blocks >1 size
    // 2 when exists 1-size block, surrounded by two same-type blocks
    // 1 otherwise

    int n; cin >> n;
    string s; cin >> s;
    int og_compression = 1;
    for (int i = 1; i <= n-1; ++i) {
        if (s[i] != s[i-1]) ++og_compression;
    }
    // cout << s << '\n';
    // cout << og_compression << '\n';

    // Case 0: If all blocks >1 sized i.e. there doesn't exist a solitary block
    bool all_blocks_large = true;
    for (int i = 1; i < n-1; ++i) {
        if (s[i] == s[i-1] || s[i] == s[i+1]) continue;
        all_blocks_large = false;
        break;
    }
    if (all_blocks_large) {
        cout << og_compression << '\n';
        return;
    }

    // Case 2: If exists one-size block between two equal blocks
    for (int i = 1; i < n-1; ++i) {
        if (s[i-1] == s[i+1] && s[i] != s[i-1] && s[i] != s[i+1]) {
            cout << og_compression - 2 << '\n';
            return;
        }
    }
    // Case 1: Otherwise
    cout << og_compression - 1 << '\n';
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