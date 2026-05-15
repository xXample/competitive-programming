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
    int n, x, y;
    cin >> n >> x >> y;
    vll acc(n, 0);
    vll transfer(n, 0);
    ll transfer_sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> acc[i];
        transfer[i] = (acc[i] / x) * y;
        transfer_sum += transfer[i];
    }

    for (int i = 0; i < n; ++i) {
        acc[i] += transfer_sum - transfer[i]; 
    }
    
    cout << *max_element(all(acc)) << '\n';
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