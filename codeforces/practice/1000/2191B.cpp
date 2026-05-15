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

    vi a(n);
    for (auto &i : a) {
        cin >> i;
    }
    
    vi cnt(n+1);
    for (auto i : a) {
        ++cnt[i];
    }

    if (cnt[0] == 0) cout << "NO\n";
    else if (cnt[0] == 1) cout << "YES\n";
    else cout << (cnt[1] == 0  ? "NO\n" : "YES\n");
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