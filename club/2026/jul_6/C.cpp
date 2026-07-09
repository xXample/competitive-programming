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
    // We can always reduce 1110100000101001111110
    // into simply 1010101010

    // If left and right same, cout 1
    // If left and right differ, 
    ///     but... >2 groups exist, cout << 1
    // else cout 2

    int n;
    cin >> n;
    string s; 
    cin >> s;

    if (s[0] == s[n-1]) {
        cout << 1 << '\n';
        return;
    }
    
    int num_groups = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i-1]) ++num_groups;
    }
    if (num_groups > 2) cout << 1 << '\n';
    else cout << 2 << '\n'; 
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