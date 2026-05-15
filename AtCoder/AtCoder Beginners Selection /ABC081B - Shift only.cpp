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
    int n; cin >> n;
    int max_div = INF;
    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;

        int cnt = 0;
        while ((input & 1) == 0 && input != 0) {
            ++cnt;
            input >>= 1;
        }
        max_div = min(max_div, cnt);
    }
    cout << max_div;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
}

    return 0;
}