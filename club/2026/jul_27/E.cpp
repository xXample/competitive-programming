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
    ll n, m, k;
    cin >> n >> m >> k;
    ll w; 
    cin >> w;
    vll gorilla(w);
    for (auto &i : gorilla) cin >> i;

    vll weight;
    weight.reserve(n*m);
    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= m; ++j) {
            ll val = min({j, m-j+1, k, m-k+1}) * min({i, n-i+1, k, n-k+1});
            weight.push_back(val);
        }
    }
    sort(weight.begin(), weight.end(), greater<ll>());
    sort(gorilla.begin(), gorilla.end(), greater<ll>());

    ll ans = 0;
    for (ll i = 0; i < w; ++i) {
        ans += weight[i] * gorilla[i];
    }
    cout << ans << '\n';
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