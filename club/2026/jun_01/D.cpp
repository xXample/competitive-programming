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
    vll lower, upper;
    lower.reserve(n);
    upper.reserve(n);

    lower.push_back(1);

    ll thing = 4;
    while (thing <= x) {
        lower.push_back(thing);
        thing <<= 1;
    }
    while (thing < n) {
        upper.push_back(thing);
        thing <<= 1;
    }

    cout << lower.size() * upper.size() << '\n';
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