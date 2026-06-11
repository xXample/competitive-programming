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

const int MOD = 998244353;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    ll n, x;
    cin >> n >> x;
    vll prefix;
    prefix.reserve(n+1);
    prefix.push_back(0);
    for (ll i = 1; i < n+1; ++i) {
        prefix.push_back(prefix[i-1] ^ i);
    }
    for (auto i : prefix) cout << i << ' ';
    cout << '\n';


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