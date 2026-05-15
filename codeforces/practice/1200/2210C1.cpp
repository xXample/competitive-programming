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

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

void solve() {
    int n;
    cin >> n;
    vll a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    int res = 0;
    for (int i = 1; i < n-1; ++i) {
        ll left = gcd(a[i-1], a[i]);
        ll right = gcd(a[i], a[i+1]);
        ll reduction = lcm(left, right);
        if (reduction < a[i]) ++res;
        // cout << reduction << ' ' << a[i] << ", ";
    }
    if (gcd(a[0], a[1]) < a[0]) ++res;
    if (gcd(a[n-2], a[n-1]) < a[n-1]) ++res;

    cout << res << '\n';
    // cout << '\n';
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
