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
    ll n; cin >> n;
    vll a(n); for (auto &i : a) cin >> i;

    ll S = (a[0] + a[n-1]) / (n-1);
    vll prefix_S(n);
    for (int i = 0; i < n-1; ++i) {
        prefix_S[i] = (S - a[i] + a[i+1]) / 2;
    }
    prefix_S[n-1] = S;

    cout << prefix_S[0] << ' ';
    for (int i = 1; i < n; ++i) {
        cout << prefix_S[i] - prefix_S[i-1] << ' ';
    }
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